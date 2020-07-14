#include <iostream>
#include <string>

using namespace std;



class Component
{
public:
	Component(string name);
	void update();
	void draw();

private:
	string name;
};

Component::Component(string name)
{
	this->name = name;
}

void Component::update()
{
	cout << name << " update" << endl;
}

void Component::draw()
{
	cout << name << " draw" << endl;
}

int main() {
	string order;

	cout << "�v���O�����J�n" << endl;

	while (true) {
		cin >> order;

		if (order == "a") {

		}
		else if (order == "add") {

		}
		else if (order == "end") {
			cout << "�v���O�����I��" << endl;
			break;
		}
		else {
			cout << "���̓~�X�ł��B�ē��͂��Ă��������B" << endl;
			continue;
		}
	}
}