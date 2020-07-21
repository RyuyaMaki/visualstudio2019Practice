#pragma once

#include "../ComponentManager/ComponentManager.h"
#include <string>

class GameObject{
public:
	GameObject(const std::string& name);

	void update();
	void draw();

private:
	std::string m_name;
};