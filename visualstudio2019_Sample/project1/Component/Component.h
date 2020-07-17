#include <iostream>
#include <string>

class Component {
public:
	Component(std::string name);
	void update();
	void draw();

private:
	std::string name;
};
