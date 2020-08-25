#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main() {

	int first = 0;
	int second = 0;
	int useranswer = 0;
	int decide = 0;

	do {
		srand((unsigned int)time(NULL));

		first = rand() % 13 + 1;
		second = rand() % 13 + 1;

		cout << "1枚目は" << first << "です。" << endl;
		cout << "2枚目は■です。" << endl;
		cout << "high and low? 0:hith 1:low" << endl;
		cin >> useranswer;
		
		if (first < second) {
			if (useranswer == 0) {
				cout << "あたり" << endl;
			}
			else {
				cout << "はずれ" << endl;
			}
		}
		else if (first > second) {
			if (useranswer == 1) {
				cout << "あたり" << endl;
			}
			else {
				cout << "はずれ" << endl;
			}
		}

		cout << "ゲームを続ける:1 ゲームを終わる:0" << endl;
		cin >> decide;

	} while (decide == 1);
}