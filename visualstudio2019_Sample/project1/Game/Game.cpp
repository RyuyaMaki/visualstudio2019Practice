#include <iostream>

#include "../GameObjectManager/GameObjectManager.h"
#include "../ComponentManager/ComponentManager.h"
#include "../GameObject/GameObject.h"
#include "Game.h"

#include "../CloneObject/CloneObject.h"
#include "../DestroyObject/DestroyObject.h"
#include "../TestOutPut/TestOutPut.h"
#include "../GameObjectCreateObject/GameObjectCreateObject.h"
#include "../GameEndComponent/gameEndComponent.h"

bool m_isEnd = true;

void Game::run()
{
	std::string order;

	// GameObjectA�̐���
	auto gameObject = std::make_shared<GameObject>("GameObjectA");
	GameObjectManager::addGameObject(gameObject);
	ComponentManager::createComponent<TestOutPut>(gameObject);
	//ComponentManager::createComponent<CloneObject>(gameObject, 3);
	// ComponentManager::addComponent<DestroyObject>(gameObject, "GameObejctA");
	//ComponentManager::createComponent<GameObjectCreateObject>(gameObject, "GameObjectB");
	ComponentManager::createComponent<GameEndComponent>(gameObject, "END");

	std::cout << "�v���O�����J�n" << std::endl;

	while (m_isEnd) {

		std::cin >> order;
		
		ComponentManager::sendInputOrder(order);
		if (order == "add") {
			std::cout << "�I�u�W�F�N�g��ǉ����܂��B\n" << "���O����͂��Ă�������" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// �V�����I�u�W�F�N�g��ǉ������̂�update��draw���s��
			auto gameObject = std::make_shared<GameObject>(gameObjectName);
			GameObjectManager::addGameObject(gameObject);
			ComponentManager::createComponent<TestOutPut>(gameObject);
		}
		/*else if (order == "end") {
			std::cout << "�v���O�����I��" << std::endl;
			break;
		}*/ 

		std::cout << "�t���[���X�V" << std::endl;
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
