#pragma once

#include <list>
#include <memory>
#include <string>

#include "../Component/Component.h"
#include "../GameObject/GameObject.h"

class ComponentManager {
public:
	// 作るコンポーネントの型情報といくつかの引数でコンポーネントを作る。
	template <class Component, class... Args>
	static void createComponent(const std::shared_ptr<GameObject>& gameObject, const Args&... args){
		auto component = std::make_shared<Component>(args...);
		component->setGameObject(gameObject);
		m_components.push_back(component);
		gameObject->addComponent(component);
	}

	static void update();
	static void updateComponentList();
	static void draw();
	static void deleteComponent();
	static void addComponents(const std::list<std::shared_ptr<Component>>& components, const std::shared_ptr<GameObject>& gameObject);

private:
	static std::list<std::shared_ptr<Component>> m_components;
	static std::list<std::shared_ptr<Component>> m_addComponentsToLater;
};