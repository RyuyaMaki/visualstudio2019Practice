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
	std::string addingConditions = "add";
	auto isAddIncluded = inputOrder.find(addingConditions);

	if (isAddIncluded == 0U) {
		if (inputOrder.size() <= addingConditions.size() + 1U) {
			std::cout << "•¶Žš”‚ª•s³‚Å‚·" << std::endl;
		}
		else {
			std::string gameObjectName = inputOrder.substr(addingConditions.size() + 1U);

			auto gameObject = GameObjectManager::createGameObject(gameObjectName);
			ComponentManager::createComponent<TestOutPut>(gameObject);
		}
	}
}
