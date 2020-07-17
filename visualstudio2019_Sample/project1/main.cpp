#include <iostream>
#include <string>

int main() {
	std::string order;

	std::cout << "プログラム開始" << std::endl;

	while (true) {
		std::cin >> order;

		if (order == "a") {
			std::cout << "フレーム更新" << std::endl;
			// updateとdrawを行う
		}
		else if (order == "add") {
			std::cout << "オブジェクトを追加" << std::endl;
			// オブジェクトを追加したのちupdateとdrawを行う
		}
		else if (order == "end") {
			std::cout << "プログラム終了" << std::endl;
			break;
		}
		else {
			std::cout << "入力ミスです。再入力してください。" << std::endl;
			continue;
		}
	}
}