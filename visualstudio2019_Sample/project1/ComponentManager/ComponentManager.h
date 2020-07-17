#pragma once

#include <list>
#include <memory>

class Component;

class ComponentManager {
public:
	static void add(std::shared_ptr<Component> component);
	static void update();
	static void draw();

private:
	static std::list<std::shared_ptr<Component>> m_components;
};