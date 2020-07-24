#pragma once

#include <list>
#include <memory> // �|�C���^�X�}�[�g�|�C���^���g�����߂̃C���N���[�h

class GameObject;

class GameObjectManager {
public:
	void addGameObject(const std::shared_ptr<GameObject>& gameObject);

private:
	std::list<std::shared_ptr<GameObject>> m_gameObjects;
};