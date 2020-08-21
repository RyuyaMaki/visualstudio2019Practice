#include "../ComponentManager/ComponentManager.h"
#include "../GameObjectManager/GameObjectManager.h"
#include "../TestOutPut/TestOutPut.h"
#include "GameObjectCreateObject.h"

GameObjectCreateObject::GameObjectCreateObject(const std::string& name)
	:m_name {name}
{
	auto gameObject = std::make_shared<GameObject>("name");
	GameObjectManager::addGameObject(gameObject);
	ComponentManager::createComponent<TestOutPut>(gameObject);
}

std::shared_ptr<Component> GameObjectCreateObject::createClone()
{
	return std::make_shared<GameObjectCreateObject>(m_name);
}

void GameObjectCreateObject::input(const std::string& inputStr)
{
}
