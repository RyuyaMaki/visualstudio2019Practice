#pragma once

#include<list>
#include<string>

class GameObjectManager {
public:

	GameObjectManager() = default;

	void add(const std::string& name);

private:
	std::list<GameObject*> m_GameObjects;
};