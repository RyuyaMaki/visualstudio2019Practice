#include "ComponentManager.h"
#include "../TestOutPut/TestOutPut.h"
#include "../DestroyObject/DestroyObject.h"
#include "../CloneObject/CloneObject.h"

std::list<std::shared_ptr<Component>> ComponentManager::m_components;
std::list<std::shared_ptr<Component>> ComponentManager::m_addComponentsToLater;

void ComponentManager::update(){
	for (const auto& component : m_components) {
		component->update();
	}
}

void ComponentManager::updateComponentList(){
	for (const auto& component: m_addComponentsToLater) {
		m_components.push_back(component);
	}

	m_addComponentsToLater.clear();
}

void ComponentManager::draw(){
	for (const auto& component : m_components) {
		component->draw();
	}
}

void ComponentManager::deleteComponent(){
	m_components.remove_if([](const auto& node) {return node->isDead();});
	
	//ã‚Æ“¯“™‚Ìˆ—
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

void ComponentManager::addComponents(const std::list<std::shared_ptr<Component>>& components, const std::shared_ptr<GameObject>& gameObject){
	for (const auto& component: components) {
		component->setGameObject(gameObject);
		m_addComponentsToLater.push_back(component);
		gameObject->addComponent(component);
	}
}
