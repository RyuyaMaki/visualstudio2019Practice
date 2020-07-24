#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

void Game::Run()
{
	std::string order;
	GameObjectManager gameObjectManager;

	// GameObjectA�̐���
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	gameObjectManager.addGameObject(gameObject);
	ComponentManager::add(gameObject);

	std::cout << "�v���O�����J�n" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "add") {
			std::cout << "�I�u�W�F�N�g��ǉ����܂��B\n" << "���O����͂��Ă�������" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// �I�u�W�F�N�g��ǉ������̂�update��draw���s��
			auto gameObject = std::make_shared<GameObject>(gameObjectName);
			gameObjectManager.addGameObject(gameObject);
			ComponentManager::add(gameObject);
			ComponentManager::update();
			ComponentManager::draw();
		}
		else if (order == "end") {
			std::cout << "�v���O�����I��" << std::endl;
			break;
		}
		else {
			std::cout << "�t���[���X�V" << std::endl;
			ComponentManager::update();
			ComponentManager::draw();
		}
	}
}
