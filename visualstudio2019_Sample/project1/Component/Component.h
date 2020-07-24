#pragma once

#include <string>
#include <memory>

class GameObject;

class Component {
public:
	void update();
	void draw();
	void setGameObject(std::shared_ptr<GameObject>& gameObject);

private:
	std::shared_ptr<GameObject> m_gameObject;
};