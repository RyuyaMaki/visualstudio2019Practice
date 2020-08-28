#pragma once
#include "../Component/Component.h"

class GameEndComponent : public Component {
public:
	explicit GameEndComponent(const std::string& inputStr);

	std::shared_ptr<Component> createClone() override;

	void input(const std::string& inputOrder) override;

private:
	std::string m_inputStr;
};