#include <iostream>
#include <string>

using namespace std;

int main() {
	string order;

	cout << "�v���O�����J�n" << endl;

	while (true) {
		cin >> order;

		if (order == "a") {
			cout << "�t���[���X�V" << endl;
			// update��draw���s��
		}
		else if (order == "add") {
			cout << "�I�u�W�F�N�g��ǉ�" << endl;
			// �I�u�W�F�N�g��ǉ������̂�update��draw���s��
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