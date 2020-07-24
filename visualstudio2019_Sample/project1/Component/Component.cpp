#include "Component.h"
#include "../GameObject/GameObject.h"

#include <iostream>

void Component::update(){
	std::cout << m_gameObject->getName() << " update" << std::endl;
}

void Component::draw(){
	std::cout << m_gameObject->getName() << " draw" << std::endl;
}

void Component::setGameObject(const std::shared_ptr<GameObject>& gameObject){
	m_gameObject = gameObject;
}