#pragma once

#include <string>

class GameObject{
public:
	const GameObject(const std::string& name);
	const std::string& getName();

private:
	std::string m_name;
};