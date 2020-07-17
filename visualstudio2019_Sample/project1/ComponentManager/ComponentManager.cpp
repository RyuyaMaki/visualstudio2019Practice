#include "ComponentManager.h"
#include "../Component/Component.h"

void ComponentManager::add(Component* component)
{
	m_Components.push_back(component);
}

void ComponentManager::update()
{
	for (auto component : m_Components) {
		component->update();
	}
}

void ComponentManager::draw()
{
	for (auto component : m_Components) {
		component->draw();
	}
}
