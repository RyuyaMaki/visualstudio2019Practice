#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

void Game::run()
{
	std::string order;

	// GameObjectAの生成
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	GameObjectManager::addGameObject			(gameObject);
	ComponentManager::addTestOutPutComponent	(gameObject);
	//ComponentManager::addDestroyObjectComponent	(gameObject, "GameObjectA");
	ComponentManager::addCloneObjectComponent	(gameObject, 3);

	std::cout << "プログラム開始" << std::endl;

	while (true) {

		std::cin >> order;
		if (order == "add") {
			std::cout << "オブジェクトを追加します。\n" << "名前を入力してください" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// 新しいオブジェクトを追加したのちupdateとdrawを行う
			auto gameObject = std::make_shared<GameObject>(gameObjectName);
			GameObjectManager::addGameObject(gameObject);
			ComponentManager::addTestOutPutComponent(gameObject);
		}
		else if (order == "end") {
			std::cout << "プログラム終了" << std::endl;
			break;
		}
		
		//else if (order == "clone") {
		//	std::cout << "オブジェクトを複製します。\n" << "複製する数を入力してください" << std::endl;
		//	int cloneCount;
		//	std::cin >> cloneCount;
		//	// CloneObject
		//}

		std::cout << "フレーム更新" << std::endl;
		ComponentManager::updateComponentList();
		ComponentManager::update();
		ComponentManager::draw();

		GameObjectManager::deleteGameObject();
		ComponentManager::deleteComponent();
	}
}
