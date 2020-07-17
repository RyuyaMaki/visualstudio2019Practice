#include <iostream>
#include <string>

#include "GameObjectManager/GameObjectManager.h"
#include "GameObject/GameObject.h"

int main() {
	std::string order;
	GameObjectManager m_gameobjectmaneger;

	m_gameobjectmaneger.add(new GameObject("GameObjectA"));
	m_gameobjectmaneger.add(new GameObject("GameObjectB"));

	std::cout << "プログラム開始" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "a") {
			std::cout << "フレーム更新" << std::endl;
			// updateとdrawを行う
			m_gameobjectmaneger.update();
			m_gameobjectmaneger.draw();
		}
		else if (order == "add") {
			std::cout << "オブジェクトを追加します。\n" << "名前を入力してください" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// オブジェクトを追加したのちupdateとdrawを行う
			m_gameobjectmaneger.add(new GameObject(gameObjectName));
			m_gameobjectmaneger.update();
			m_gameobjectmaneger.draw();
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