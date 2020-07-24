#pragma once

#include <list>
#include <memory>

class Component;
class GameObject;

class ComponentManager {
public:
	static void add(const std::shared_ptr<GameObject>& gameObject);
	static void update();
	static void draw();

private:
	static std::list<std::shared_ptr<Component>> m_components;
};