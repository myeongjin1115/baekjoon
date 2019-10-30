// https://www.acmicpc.net/problem/2941

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char buffer[101];
	int len;
	int count = 0;
	
	cin >> buffer;
	len = strlen(buffer);
	for (int i = 0; i < len; i++) {
		if (buffer[i] == 'c' && buffer[i + 1] == '=' ||
			buffer[i] == 'c' && buffer[i + 1] == '-' ||
			buffer[i] == 'd' && buffer[i + 1] == 'z' && buffer[i + 2] == '=' ||
			buffer[i] == 'd' && buffer[i + 1] == '-' ||
			buffer[i] == 'l' && buffer[i + 1] == 'j' ||
			buffer[i] == 'n' && buffer[i + 1] == 'j' ||
			buffer[i] == 's' && buffer[i + 1] == '=' ||
			buffer[i] == 'z' && buffer[i + 1] == '=') continue;
		
		count++;
	}
	
	cout << count << '\n';
	
	return 0;
}
