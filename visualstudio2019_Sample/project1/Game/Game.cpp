#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

void Game::run()
{
	std::string order;

	// GameObjectA�̐���
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	GameObjectManager::addGameObject			(gameObject);
	ComponentManager::addTestOutPutComponent	(gameObject);
	//ComponentManager::addDestroyObjectComponent	(gameObject, "GameObjectA");
	ComponentManager::addCloneObjectComponent	(gameObject, 3);

	std::cout << "�v���O�����J�n" << std::endl;

	while (true) {

		std::cin >> order;
		if (order == "add") {
			std::cout << "�I�u�W�F�N�g��ǉ����܂��B\n" << "���O����͂��Ă�������" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// �V�����I�u�W�F�N�g��ǉ������̂�update��draw���s��
			auto gameObject = std::make_shared<GameObject>(gameObjectName);
			GameObjectManager::addGameObject(gameObject);
			ComponentManager::addTestOutPutComponent(gameObject);
		}
		else if (order == "end") {
			std::cout << "�v���O�����I��" << std::endl;
			break;
		}
		
		//else if (order == "clone") {
		//	std::cout << "�I�u�W�F�N�g�𕡐����܂��B\n" << "�������鐔����͂��Ă�������" << std::endl;
		//	int cloneCount;
		//	std::cin >> cloneCount;
		//	// CloneObject
		//}

		std::cout << "�t���[���X�V" << std::endl;
		ComponentManager::updateComponentList();
		ComponentManager::update();
		ComponentManager::draw();

		GameObjectManager::deleteGameObject();
		ComponentManager::deleteComponent();
	}
}
