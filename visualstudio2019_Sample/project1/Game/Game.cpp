#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

#include "../CloneObject/CloneObject.h"
#include "../DestroyObject/DestroyObject.h"
#include "../TestOutPut/TestOutPut.h"
#include "../GameObjectCreateObject/GameObjectCreateObject.h"
#include "../ProgramEndObject/ProgramEndObject.h"

void Game::run()
{
	std::string order;

	// GameObjectAの生成
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	GameObjectManager::addGameObject(gameObject);
	ComponentManager::createComponent<TestOutPut>(gameObject);
	ComponentManager::createComponent<CloneObject>(gameObject, 3);
	// ComponentManager::addComponent<DestroyObject>(gameObject, "GameObejctA");
	ComponentManager::createComponent<ProgramEndObject>(gameObject);
	ComponentManager::createComponent<GameObjectCreateObject>(gameObject, "GameObjectB");

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
			ComponentManager::createComponent<TestOutPut>(gameObject);
		}
		else if (order == "end") {
			std::cout << "プログラム終了" << std::endl;
			break;
		}

		std::cout << "フレーム更新" << std::endl;
		ComponentManager::updateComponentList();
		ComponentManager::update();
		ComponentManager::draw();

		GameObjectManager::deleteGameObject();
		ComponentManager::deleteComponent();
	}
}
