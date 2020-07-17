#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

void GameObjectManager::add(GameObject* gameObject)
{
	m_GameObjects.push_back(gameObject);
}

void GameObjectManager::update()
{
	for (auto gameObject : m_GameObjects) {
		gameObject->update();
	}
}

void GameObjectManager::draw()
{
	for (auto gameObject : m_GameObjects) {
		gameObject->draw();
	}
}
