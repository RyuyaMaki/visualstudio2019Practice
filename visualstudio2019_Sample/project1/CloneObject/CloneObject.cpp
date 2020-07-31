#include "CloneObject.h"
#include "../GameObject/GameObject.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObjectManager/GameObjectManager.h"

CloneObject::CloneObject(int cloneNum, const std::shared_ptr<GameObject>& gameObject)
	:m_cloneNumber{cloneNum}, m_gameObject{gameObject}
{
}

void CloneObject::update()
{
	if (m_cloneNumber < 0) {
		return;
	}

	m_cloneNumber--;

	std::list<std::shared_ptr<Component>> components = m_gameObject->getComponents();
	std::list<std::shared_ptr<Component>> afterCloneComponents;
	for (const auto& component: components) {
		afterCloneComponents.push_back(component->createClone());
	}

	auto afterCloneGameObject = std::make_shared<GameObject>(m_gameObject->getName());

	ComponentManager::addComponents(afterCloneComponents, afterCloneGameObject);
	GameObjectManager::addGameObject(afterCloneGameObject);
}

void CloneObject::draw()
{
}

std::shared_ptr<Component>& CloneObject::createClone() {
	ComponentManager::addCloneObjectComponent(m_cloneNumber, m_gameObject);
}