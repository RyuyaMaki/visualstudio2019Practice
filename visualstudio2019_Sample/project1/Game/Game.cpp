#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

#include "../CloneObject/CloneObject.h"
#include "../DestroyObject/DestroyObject.h"
#include "../TestOutPut/TestOutPut.h"
#include "../GameEndComponent/gameEndComponent.h"
#include "../GameObjectCreateObject/GameObjectCreateObject.h"

bool m_isEnd = true;

void Game::run()
{
	std::string order;

	// GameObjectAの生成
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	GameObjectManager::addGameObject(gameObject);
	ComponentManager::createComponent<TestOutPut>(gameObject);
	//ComponentManager::createComponent<CloneObject>(gameObject, 3);
	// ComponentManager::addComponent<DestroyObject>(gameObject, "GameObejctA");
	//ComponentManager::createComponent<GameObjectCreateObject>(gameObject, "GameObjectB");
	ComponentManager::createComponent<GameEndComponent>(gameObject, "END");
	ComponentManager::createComponent<GameObjectCreateObject>(gameObject);

	std::cout << "プログラム開始" << std::endl;

	while (m_isEnd) {

		std::cin >> order;
		
		ComponentManager::sendInputOrder(order);
		std::cout << "フレーム更新" << std::endl;
		ComponentManager::updateComponentList();
		ComponentManager::update();
		ComponentManager::draw();

		GameObjectManager::deleteGameObject();
		ComponentManager::deleteComponent();
	}
}

void Game::end()
{
	m_isEnd = false;
}
