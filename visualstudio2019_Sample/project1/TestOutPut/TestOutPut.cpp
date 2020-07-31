#include <iostream>

#include "TestOutPut.h"
#include "../GameObject/GameObject.h"

void TestOutPut::update(){
	std::cout << m_gameObject.lock()->getName() << " update" << std::endl;
}

void TestOutPut::draw(){
	std::cout << m_gameObject.lock()->getName() << " draw" << std::endl;
}

std::shared_ptr<Component>& TestOutPut::createClone()
{
	// TODO: return ステートメントをここに挿入します
}
