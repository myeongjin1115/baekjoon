// https://www.acmicpc.net/problem/2565

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    vector<pair<int, int>> pv;
    int n, i, j, in1, in2;
    int max_num = 0;
    int DP[101];

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> in1 >> in2;
        pv.push_back(make_pair(in1, in2));
    }
    sort(pv.begin(), pv.end(), compare);

    for(i = 0; i < n; i++) {
        DP[i] = 1;
        for(j = 0; j < i; j++) {
            if(pv.at(i).second > pv.at(j).second) {
                DP[i] = max(DP[i], DP[j] + 1);
                if(max_num < DP[i]) max_num = DP[i];
            }
        }
    }

    cout << n - max_num << endl;
    
    return 0;
}