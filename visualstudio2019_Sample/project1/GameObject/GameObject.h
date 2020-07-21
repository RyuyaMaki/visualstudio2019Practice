#pragma once

#include <string>

class GameObject{
public:
	GameObject(const std::string& name);
	const std::string& getName();

private:
	const std::string m_name;
};