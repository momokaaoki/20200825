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

		cout << "1���ڂ�" << first << "�ł��B" << endl;
		cout << "2���ڂ́��ł��B" << endl;
		cout << "high and low? 0:hith 1:low" << endl;
		cin >> useranswer;
		
		if (first < second) {
			if (useranswer == 0) {
				cout << "������" << endl;
			}
			else {
				cout << "�͂���" << endl;
			}
		}
		else if (first > second) {
			if (useranswer == 1) {
				cout << "������" << endl;
			}
			else {
				cout << "�͂���" << endl;
			}
		}

		cout << "�Q�[���𑱂���:1 �Q�[�����I���:0" << endl;
		cin >> decide;

	} while (decide == 1);
}