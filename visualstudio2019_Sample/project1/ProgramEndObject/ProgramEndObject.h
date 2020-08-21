#pragma once

#include "../Component/Component.h"

class ProgramEndObject : public Component {
public:
	ProgramEndObject() = default;
	std::shared_ptr<Component> createClone() override;

private:
};