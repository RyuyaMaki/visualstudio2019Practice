#pragma once

#include <memory>

class GameObject;

class Component {
public:
	virtual ~Component() {}
	virtual void update() = 0;
	virtual void draw() = 0;
	void setGameObject(const std::weak_ptr<GameObject>& gameObject);
	void destroy();
	bool isDead();
	virtual std::shared_ptr<Component>& createClone() = 0;

protected:
	std::weak_ptr<GameObject> m_gameObject;
	bool m_isDead = false;
};