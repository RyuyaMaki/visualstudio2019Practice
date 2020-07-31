#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

std::list<std::shared_ptr<GameObject>> GameObjectManager::m_gameObjects;

void GameObjectManager::addGameObject(const std::shared_ptr<GameObject>& gameObject)
{
	m_gameObjects.push_back(gameObject);
}

std::shared_ptr<GameObject> GameObjectManager::findGameObejct(const std::string& gameObjectName)
{
	for (const auto& gameObject : m_gameObjects) {
		if (gameObject->getName() == gameObjectName) {
			return gameObject;
		}
	}
	return nullptr;
}

void GameObjectManager::deleteGameObject()
{
	m_gameObjects.remove_if([](const auto& node) {return node->isDead();});
}
