#include "ComponentManager.h"
#include "../Component/Component.h"

std::list<std::shared_ptr<Component>> ComponentManager::m_components;

void ComponentManager::add(std::shared_ptr<GameObject> gameObject){
	auto component = std::make_shared<Component>();
	component->setGameObject(gameObject);
	m_components.push_back(component);
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
