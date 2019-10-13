#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[100];
	int count = 0;
	
	while(getline(cin, s[count]) && count < 100) count++;
	for (int i = 0; i < count; i++) cout << s[i] << endl;
	
	return 0;
}
