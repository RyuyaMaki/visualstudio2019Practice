#pragma once

#include <string>

#include "../Component/Component.h"

class DestroyObject : public Component{
public:
	DestroyObject(const std::string gameObjectName);
	void update() override;
	void draw() override;

private:
	std::string m_gameObjectName;
};