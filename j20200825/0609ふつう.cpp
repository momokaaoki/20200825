#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main() {

	srand((unsigned int)time(NULL));

	int player = 0;

	
	while(true){

		int cpu = rand() % 7 + 1;

		cout << "１〜７の値を入力してください。" << endl;
		cin >> player;

		if (cpu == player) {
			cout << "一致した！" << endl;
			break;
		}
		else {
			cout << "cpuは" << cpu << "でした。" << endl;
			continue;
		}
	}
	

	
}