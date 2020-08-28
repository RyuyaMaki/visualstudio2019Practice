#include <iostream>

#include "../ComponentManager/ComponentManager.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../TestOutPut/TestOutPut.h"
#include "GameObjectCreateObject.h"

std::shared_ptr<Component> GameObjectCreateObject::createClone()
{
	return std::make_shared<GameObjectCreateObject>();
}

void GameObjectCreateObject::input(const std::string& inputOrder)
{
	int a = inputOrder.find("add");

	if (a == 0) {
		std::string gameObjectName = inputOrder.substr(4);

		auto gameObject = GameObjectManager::createGameObject(gameObjectName);
		ComponentManager::createComponent<TestOutPut>(gameObject);
	}
}
