#pragma once

#include <string>

#include "../Component/Component.h"

class GameObjectCreateObject : public Component {
public:
	GameObjectCreateObject(const std::string& name);
	std::shared_ptr<Component> createClone() override;
	virtual void input(const std::string& inputStr) override;

private:
	std::string m_name;

};