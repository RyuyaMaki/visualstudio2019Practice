#include "DestroyObject.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../GameObject/GameObject.h"

DestroyObject::DestroyObject(const std::string& gameObjectName)
	:m_gameObjectName{ gameObjectName }
{
}

void DestroyObject::update()
{
	std::shared_ptr<GameObject> gameObject = GameObjectManager::findGameObejct(m_gameObjectName);
	if (gameObject != NULL) {
		gameObject->destroy();
	}
}

void DestroyObject::draw()
{
}