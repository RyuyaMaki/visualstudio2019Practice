#include "CloneObject.h"
#include "../GameObject/GameObject.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObjectManager/GameObjectManager.h"

CloneObject::CloneObject(int cloneNum)
	:m_cloneNumber{cloneNum}
{
}

void CloneObject::update()
{
	if(m_cloneNumber <= 0) {
		return;
	}

	m_cloneNumber--;

	auto afterCloneGameObject = std::make_shared<GameObject>(m_gameObject.lock()->getName());

	std::list<std::shared_ptr<Component>> afterCloneComponents;
	for (const auto& component: m_gameObject.lock()->getComponents()) {
		afterCloneComponents.push_back(component->createClone());
	}

	ComponentManager::addComponents(afterCloneComponents, afterCloneGameObject);
	GameObjectManager::addGameObject(afterCloneGameObject);
}

void CloneObject::draw()
{
}

std::shared_ptr<Component> CloneObject::createClone() {
	return std::make_shared<CloneObject>(m_cloneNumber);
}