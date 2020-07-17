#include "GameObject.h"

GameObject::GameObject(const std::string& name)
	:m_name{name}
{
}

void GameObject::update()
{
	m_ComponentManager.update();
}

void GameObject::draw()
{
	m_ComponentManager.draw();
}
