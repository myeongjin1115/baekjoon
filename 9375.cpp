#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, string> p1, pair<string, string> p2) {
    return p1.second < p2.second;
}

int main() {
    int T, n;
    string name, type;
    vector<pair<string, string>> v;
    vector<pair<string, string>>::iterator iter;

    cin >> T;
    for(int i = 0; i < T; i++) {
        int typeCount[30] = {0, };
        int typeCountIndex = 0;
        int count = 0;
        int result = 0;
        string before = "";

        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> name >> type;
            v.push_back(make_pair(name, type));
        }

        sort(v.begin(), v.end(), compare);

        before = v.begin()->second;
        for(iter = v.begin(); iter != v.end(); iter++) {
            if(before != iter->second) {
                typeCountIndex++;
                before = iter->second;
            }
            typeCount[typeCountIndex]++;
        }

        result = typeCount[0] + 1;
        for(int j = 1; j < typeCountIndex + 1; j++) {
            result *= (typeCount[j] + 1);
        }
        result--;

        cout << result << endl;

        v.clear();
    }
}