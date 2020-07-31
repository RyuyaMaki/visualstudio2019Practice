#pragma once

#include <string>

#include "../Component/Component.h"

class DestroyObject : public Component{
public:
	DestroyObject(const std::string& gameObjectName);
	void update() override;
	void draw() override;
	std::shared_ptr<Component> createClone() override;

private:
	std::string m_gameObjectName;
};