#include "GameObject.h"

GameObject::GameObject(const std::string& name)
	:m_name{name}{
}

void GameObject::update(){
	ComponentManager::update();
}

void GameObject::draw(){
	ComponentManager::draw();
}