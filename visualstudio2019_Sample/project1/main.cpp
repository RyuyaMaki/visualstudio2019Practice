#include <iostream>
#include <string>

int main() {
	std::string order;

	std::cout << "�v���O�����J�n" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "a") {
			std::cout << "�t���[���X�V" << std::endl;
			// update��draw���s��
		}
		else if (order == "add") {
			std::cout << "�I�u�W�F�N�g��ǉ�" << std::endl;
			// �I�u�W�F�N�g��ǉ������̂�update��draw���s��
		}
		else if (order == "end") {
			std::cout << "�v���O�����I��" << std::endl;
			break;
		}
		else {
			std::cout << "���̓~�X�ł��B�ē��͂��Ă��������B" << std::endl;
			continue;
		}
	}
}