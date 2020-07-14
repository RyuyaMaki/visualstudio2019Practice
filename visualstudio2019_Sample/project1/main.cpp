#include <iostream>
#include <string>

using namespace std;

int main() {
	string order;

	cout << "プログラム開始" << endl;

	while (true) {
		cin >> order;

		if (order == "a") {
			cout << "フレーム更新" << endl;
			// updateとdrawを行う
		}
		else if (order == "add") {
			cout << "オブジェクトを追加" << endl;
			// オブジェクトを追加したのちupdateとdrawを行う
		}
		else if (order == "end") {
			cout << "プログラム終了" << endl;
			break;
		}
		else {
			cout << "入力ミスです。再入力してください。" << endl;
			continue;
		}
	}
}