#include "ComponentManager.h"
#include "../Component/Component.h"

void ComponentManager::add(std::shared_ptr<Component> component)
{
	m_components.push_back(component);
}

void ComponentManager::update()
{
	for (auto component : m_components) {
		component->update();
	}
}

void ComponentManager::draw()
{
	for (auto component : m_components) {
		component->draw();
	}
}
