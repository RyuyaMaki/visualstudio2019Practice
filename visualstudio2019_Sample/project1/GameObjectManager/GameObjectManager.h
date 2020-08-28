#pragma once

#include <list>
#include <memory> // �|�C���^�X�}�[�g�|�C���^���g�����߂̃C���N���[�h
#include <string>

class GameObject;

class GameObjectManager {
public:
	static std::shared_ptr<GameObject> createGameObject(const std::string& name);
	static void addGameObject(const std::shared_ptr<GameObject>& gameObject);
	static std::shared_ptr<GameObject> findGameObejct(const std::string& gameObjectName);
	static void deleteGameObject();

private:
	static std::list<std::shared_ptr<GameObject>> m_gameObjects;
};