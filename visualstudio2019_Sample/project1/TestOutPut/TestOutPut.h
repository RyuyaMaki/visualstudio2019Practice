#pragma once

#include "../Component/Component.h"

class TestOutPut : public Component{
public:
	void update() override;

	void draw() override;

	void setGameObject(const std::weak_ptr<GameObject>& gameObject) override;
};