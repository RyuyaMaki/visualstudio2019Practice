#pragma once

#include <string>
#include "../GameObject/GameObject.h"

class Component {
public:
	void update();
	void draw();
	void setGameObject(std::shared_ptr<GameObject> gameObject);

private:
	std::string m_name;
	std::shared_ptr<GameObject> m_gameObject;
};