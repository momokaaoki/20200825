#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main() {

	srand((unsigned int)time(NULL));

	int player = 0;

	
	while(true){

		int cpu = rand() % 7 + 1;

		cout << "�P�`�V�̒l����͂��Ă��������B" << endl;
		cin >> player;

		if (cpu == player) {
			cout << "��v�����I" << endl;
			break;
		}
		else {
			cout << "cpu��" << cpu << "�ł����B" << endl;
			continue;
		}
	}
	

	
}