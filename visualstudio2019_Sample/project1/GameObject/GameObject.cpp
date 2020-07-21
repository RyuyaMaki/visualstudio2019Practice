#include "GameObject.h"
#include "../ComponentManager/ComponentManager.h"

GameObject::GameObject(const std::string& name)
	:m_name{name}{
}

void GameObject::update(){
	ComponentManager::update();
}

void GameObject::draw(){
	ComponentManager::draw();
}