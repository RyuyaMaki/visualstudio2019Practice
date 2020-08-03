#pragma once

#include <string>
#include <list>
#include <memory>

class Component;

class GameObject{
public:
	explicit GameObject(const std::string& name);
	void addComponent(const std::shared_ptr<Component>& component);
	void destroy();
	const std::string& getName() const;
	bool isDead() const;
	const std::list<std::shared_ptr<Component>>& getComponents();

private:
	std::list <std::shared_ptr<Component>> m_myComponents;
	std::string m_name;
	bool m_isDead;
};