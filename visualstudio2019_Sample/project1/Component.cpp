#include "Component.h"

Component::Component(string name){
	this->name = name;
}

void Component::update(){
	cout << name << " update" << endl;
}

void Component::draw(){
	cout << name << " draw" << endl;
}