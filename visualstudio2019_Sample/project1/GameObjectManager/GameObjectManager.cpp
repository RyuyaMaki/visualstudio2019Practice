#include "GameObjectManager.h"
#include "../GameObject/GameObject.h"

std::shared_ptr<GameObject> GameObjectManager::addGameObject(std::shared_ptr<GameObject> gameObject)
{
	m_gameObjects.push_back(gameObject);

	return(gameObject);
}