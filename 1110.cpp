#include <iostream>
using namespace std;

int main() {
	int inputNum, cycleNum;
	int cycleLength = 0;
	
	cin >> inputNum;
	cycleNum = inputNum;
	
	do {
		cycleNum = ((cycleNum / 10) + (cycleNum % 10)) % 10 + (cycleNum % 10) * 10;
		cycleLength++;
	} while (inputNum != cycleNum);
	
	cout << cycleLength << endl;
	
	return 0;
}
