#include "GameObject.h"

GameObject::GameObject(const std::string& name)
	:m_name{name}{
}

const std::string& GameObject::getName()
{
	return m_name;
}
