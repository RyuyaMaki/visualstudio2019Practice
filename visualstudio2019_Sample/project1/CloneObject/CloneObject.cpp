#include "CloneObject.h"
#include "../GameObject/GameObject.h"

CloneObject::CloneObject(int cloneNum, std::shared_ptr<GameObject>& gameObject)
	:m_cloneNumber{cloneNum}, m_gameObject{gameObject}
{
}

void CloneObject::update()
{
	if (m_cloneNumber < 0) {
		return;
	}

	m_gameObject->getComponents();
}

void CloneObject::draw()
{
}
