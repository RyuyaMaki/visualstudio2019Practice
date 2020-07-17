#pragma once

//#include "Component.h"
#include <string>

class GameObject{
public:
	GameObject(const std::string& name);

private:
	std::string m_name;
};
