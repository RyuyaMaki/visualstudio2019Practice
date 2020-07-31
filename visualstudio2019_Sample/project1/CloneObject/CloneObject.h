#pragma once

#include "../Component/Component.h"

class CloneObject : public Component{
public:
	CloneObject(int cloneNum);
	void update() override;
	void draw() override;
	std::shared_ptr<Component> createClone() override;

private:
	int m_cloneNumber;
};
