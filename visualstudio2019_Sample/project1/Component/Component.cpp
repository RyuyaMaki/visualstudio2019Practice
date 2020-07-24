#include "Component.h"

void Component::setGameObject(const std::weak_ptr<GameObject>& gameObject)
{
	m_gameObject = gameObject;
}
