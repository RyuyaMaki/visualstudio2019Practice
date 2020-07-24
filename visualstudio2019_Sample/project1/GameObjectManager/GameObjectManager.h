#pragma once

#include <list>
#include <memory> // ポインタスマートポインタを使うためのインクルード

class GameObject;

class GameObjectManager {
public:
	void addGameObject(const std::shared_ptr<GameObject>& gameObject);

private:
	std::list<std::shared_ptr<GameObject>> m_gameObjects;
};