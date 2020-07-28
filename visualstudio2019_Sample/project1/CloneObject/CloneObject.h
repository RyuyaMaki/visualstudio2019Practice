#pragma once

#include "../Component/Component.h"

class CloneObject : public Component{
public:
	CloneObject();
	void update() override;
	void draw() override;
};
