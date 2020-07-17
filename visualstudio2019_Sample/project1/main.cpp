#include <iostream>
#include <string>

#include "GameObjectManager/GameObjectManager.h"
#include "GameObject/GameObject.h"

int main() {
	std::string order;
	GameObjectManager m_gameobjectmaneger;

	m_gameobjectmaneger.add(new GameObject("GameObjectA"));
	m_gameobjectmaneger.add(new GameObject("GameObjectB"));

	std::cout << "�v���O�����J�n" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "a") {
			std::cout << "�t���[���X�V" << std::endl;
			// update��draw���s��
			m_gameobjectmaneger.update();
			m_gameobjectmaneger.draw();
		}
		else if (order == "add") {
			std::cout << "�I�u�W�F�N�g��ǉ����܂��B\n" << "���O����͂��Ă�������" << std::endl;
			std::string gameObjectName;
			std::cin >> gameObjectName;

			// �I�u�W�F�N�g��ǉ������̂�update��draw���s��
			m_gameobjectmaneger.add(new GameObject(gameObjectName));
			m_gameobjectmaneger.update();
			m_gameobjectmaneger.draw();
		}
		else if (order == "end") {
			std::cout << "�v���O�����I��" << std::endl;
			break;
		}
		else {
			std::cout << "���̓~�X�ł��B�ē��͂��Ă��������B" << std::endl;
			continue;
		}
	}
}