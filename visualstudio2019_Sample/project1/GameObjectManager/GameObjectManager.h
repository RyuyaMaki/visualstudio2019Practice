#pragma once

#include <list>
#include <memory> // ポインタスマートポインタを使うためのインクルード

class GameObject;

class GameObjectManager {
public:
	void addGameObject(std::shared_ptr<GameObject>& gameObject);

private:
	std::list<std::shared_ptr<GameObject>> m_gameObjects;
};