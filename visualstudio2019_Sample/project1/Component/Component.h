#pragma once

#include <memory>

class GameObject;

class Component {
public:
	virtual void update() = 0;
	virtual void draw() = 0;
	virtual void setGameObject(const std::weak_ptr<GameObject>& gameObject) = 0;

protected:
	std::weak_ptr<GameObject> m_gameObject;
};