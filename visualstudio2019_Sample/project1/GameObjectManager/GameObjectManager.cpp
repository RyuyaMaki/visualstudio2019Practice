#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

void GameObjectManager::addGameObject(const std::shared_ptr<GameObject>& gameObject)
{
	m_gameObjects.push_back(gameObject);
}