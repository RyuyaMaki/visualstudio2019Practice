#pragma once

#include <string>

class GameObject{
public:
	explicit GameObject(const std::string& name);
	const std::string& getName() const;

private:
	std::string m_name;
};