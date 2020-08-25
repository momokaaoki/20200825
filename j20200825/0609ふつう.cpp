#include <iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main() {

	srand((unsigned int)time(NULL));

	int player = 0;

	
	while(true){

		int cpu = rand() % 7 + 1;

		cout << "‚P`‚V‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
		cin >> player;

		if (cpu == player) {
			cout << "ˆê’v‚µ‚½I" << endl;
			break;
		}
		else {
			cout << "cpu‚Í" << cpu << "‚Å‚µ‚½B" << endl;
			continue;
		}
	}
	

	
}