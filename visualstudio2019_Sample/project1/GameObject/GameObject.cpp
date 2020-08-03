#include "GameObject.h"
#include "../Component/Component.h"

GameObject::GameObject(const std::string& name)
	:m_name{ name } , m_isDead{false} {
}

void GameObject::addComponent(const std::shared_ptr<Component>& component)
{
	m_myComponents.push_back(component);
}

const std::string& GameObject::getName() const
{
	return m_name;
}

void GameObject::destroy()
{
	m_isDead = true;

	for (const auto& component : m_myComponents) {
		component->destroy();
	}
}

bool GameObject::isDead() const
{
	return m_isDead;
}

const std::list<std::shared_ptr<Component>>& GameObject::getComponents()
{
	return m_myComponents;
}
