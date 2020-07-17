#pragma once

#include<list>
#include<string>

class GameObject;

class GameObjectManager {
public:

	GameObjectManager() = default;

	void add(const std::string& name);

private:
	std::list<GameObject*> m_GameObjects;
};