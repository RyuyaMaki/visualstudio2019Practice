#include "Component.h"

Component::Component(std::string name){
	this->name = name;
}

void Component::update(){
	std::cout << name << " update" << std::endl;
}

void Component::draw(){
	std::cout << name << " draw" << std::endl;
}