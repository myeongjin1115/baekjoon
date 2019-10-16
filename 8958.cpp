// https://www.acmicpc.net/problem/8958

#include <iostream>
using namespace std;

int main() {
	int inputNum;
	string s;
	int score;
	int isContinue;
	
	cin >> inputNum;
	for (int i = 0; i < inputNum; i++) {
		cin >> s;
		score = 0;
		isContinue = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s.at(j) == 'O') {
				score += ++isContinue;
			}
			else isContinue = 0;
		}
		cout << score << '\n';
	}
	
	return 0;
}
