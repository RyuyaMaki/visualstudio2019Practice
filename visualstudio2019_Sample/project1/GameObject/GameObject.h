#pragma once

//#include "Component.h"
#include <string>

class GameObject{
public:
	GameObject(std::string& name);

private:
	std::string m_name;
};
