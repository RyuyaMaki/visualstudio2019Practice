#pragma once

#include <string>

#include "../Component/Component.h"

class DestroyObject : public Component{
public:
	explicit DestroyObject(const std::string& gameObjectName);
	void update() override;
	std::shared_ptr<Component> createClone() override;

private:
	std::string m_gameObjectName;
};