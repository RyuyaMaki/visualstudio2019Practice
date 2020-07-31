#pragma once

#include "../Component/Component.h"

class CloneObject : public Component{
public:
	explicit CloneObject(int cloneNum, std::shared_ptr<GameObject>& gameObject);
	void update() override;
	void draw() override;

private:
	int m_cloneNumber;
	std::shared_ptr<GameObject>& m_gameObject;
};
