#pragma once

#include <list>

class Component;

class ComponentManager {
public:
	ComponentManager() = default;

	void add(Component* component);
	void update();
	void draw();

private:
	std::list<Component*> m_Components;
};