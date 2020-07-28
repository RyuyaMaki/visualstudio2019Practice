#include "Component.h"

void Component::setGameObject(const std::weak_ptr<GameObject>& gameObject)
{
	m_gameObject = gameObject;
}

void Component::destroy()
{
	m_isDead = true;
}

bool Component::isDead()
{
	return m_isDead;
}
