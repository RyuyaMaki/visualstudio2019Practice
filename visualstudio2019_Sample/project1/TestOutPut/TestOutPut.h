#pragma once

#include "../Component/Component.h"

class TestOutPut : public Component{
public:
	void update() override;
	void draw() override;
	std::shared_ptr<Component>& createClone() override;
};