#pragma once

#include <memory>
#include <string>

class GameObject;

class Component {
public:
	virtual ~Component() {}
	virtual void update() {};
	virtual void draw() {};
	virtual std::shared_ptr<Component> createClone() = 0;
	virtual void input(const std::string& inputStr) {};
	void setGameObject(const std::weak_ptr<GameObject>& gameObject);
	void destroy();
	bool isDead();

protected:
	std::weak_ptr<GameObject> m_gameObject;
	bool m_isDead = false;
};