#pragma once

#include "Component.h"

#include <iostream>

Component::Component(std::string& name)
	:m_name{name}
{	

}

void Component::update(){
	std::cout << m_name << " update" << std::endl;
}

void Component::draw(){
	std::cout << m_name << " draw" << std::endl;
}