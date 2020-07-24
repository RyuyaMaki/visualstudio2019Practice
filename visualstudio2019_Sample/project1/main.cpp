#include <iostream>
#include <string>
#include <memory>

#include "GameObjectManager/GameObjectManager.h"
#include "ComponentManager/ComponentManager.h"
#include "GameObject/GameObject.h"

int main() {
	std::string order;
	GameObjectManager gameObjectManager;

	// GameObjectAの生成
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	gameObjectManager.addGameObject(gameObject);
	ComponentManager::add(gameObject);
	
	std::cout << "プログラム開始" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "a") {
			std::cout << "フレーム更新" << std::endl;
			ComponentManager::update();
			ComponentManager::draw();
		}
		else if (order == "add") {
			std::cout << "オブジェクトを追加します。\n" << "名前を入力してください" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// オブジェクトを追加したのちupdateとdrawを行う
			auto gameObject = std::make_shared<GameObject>(gameObjectName);
			gameObjectManager.addGameObject(gameObject);
			ComponentManager::add(gameObject);
			ComponentManager::update();
			ComponentManager::draw();
		}
		else if (order == "end") {
			std::cout << "プログラム終了" << std::endl;
			break;
		}
		else {
			std::cout << "入力ミスです。再入力してください。" << std::endl;
			continue;
		}
	}
}