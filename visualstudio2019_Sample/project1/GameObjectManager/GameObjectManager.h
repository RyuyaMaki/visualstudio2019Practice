#pragma once

#include<list>
#include<string>

class GameObject;

class GameObjectManager {
public:

	GameObjectManager() = default;

	void add(GameObject* gameObject);
	void update();
	void draw();
private:
	std::list<GameObject*> m_GameObjects;
};