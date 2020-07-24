#pragma once

#include<list>
#include <memory>
#include<string>

class GameObject;

class GameObjectManager {
public:

	std::shared_ptr<GameObject> addGameObject(std::shared_ptr<GameObject> gameObject);

private:
	std::list<std::shared_ptr<GameObject>> m_gameObjects;
};