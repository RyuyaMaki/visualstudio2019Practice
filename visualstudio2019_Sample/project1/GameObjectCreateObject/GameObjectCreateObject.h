#pragma once

#include <string>

#include "../Component/Component.h"

class GameObjectCreateObject : public Component {
public:
	std::shared_ptr<Component> createClone() override;
	virtual void input(const std::string& inputOrder) override;

private:
	std::string m_inputStr;
};