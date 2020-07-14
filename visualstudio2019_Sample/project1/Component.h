#include <iostream>
#include <string>

using namespace std;

class Component {
public:
	Component(string name);
	void update();
	void draw();

private:
	string name;
};
