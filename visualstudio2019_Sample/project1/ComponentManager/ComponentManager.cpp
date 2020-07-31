#include "ComponentManager.h"
#include "../Component/Component.h"
#include "../TestOutPut/TestOutPut.h"
#include "../DestroyObject/DestroyObject.h"
#include "../GameObject/GameObject.h"
#include "../CloneObject/CloneObject.h"

std::list<std::shared_ptr<Component>> ComponentManager::m_components;

void ComponentManager::addTestOutPutComponent(const std::shared_ptr<GameObject>& gameObject){
	auto component = std::make_shared<TestOutPut>();
	component->setGameObject(gameObject);
	m_components.push_back(component);
	gameObject->addComponent(component);
}

void ComponentManager::addDestroyObjectComponent(const std::shared_ptr<GameObject>& gameObject, const std::string& objectName)
{
	auto component = std::make_shared<DestroyObject>(objectName);
	component->setGameObject(gameObject);
	m_components.push_back(component);
	gameObject->addComponent(component);
}

void ComponentManager::addCloneObjectComponent(int cloneNum, const std::shared_ptr<GameObject>& gameObject)
{
	auto component = std::make_shared<CloneObject>(cloneNum, gameObject);
	component->setGameObject(gameObject);
	m_components.push_back(component);
	gameObject->addComponent(component);
}

void ComponentManager::update(){
	for (const auto& component : m_components) {
		component->update();
	}
}

void ComponentManager::draw(){
	for (const auto& component : m_components) {
		component->draw();
	}
}

void ComponentManager::deleteComponent()
{
	m_components.remove_if([](const auto& node) {return node->isDead();});
	
	//è„Ç∆ìØìôÇÃèàóù
	/*std::list<std::list<std::shared_ptr<Component>>::iterator> tempItrList;

	for (auto itr = m_components.begin(); itr != m_components.end(); ++itr) {
		if ((*itr)->isDead()) {
			tempItrList.push_back(itr);
		}
	}

	for (auto tempItr : tempItrList) {
		m_components.erase(tempItr);
	}*/
}

void ComponentManager::addComponents(const std::list<std::shared_ptr<Component>>& components, const std::shared_ptr<GameObject>& gameObject)
{
	for (const auto& component: components) {
		m_components.push_back(component);
	}
}
