#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int N, start, end, i, count, endCnt;
    pair<int, int> time[100001];

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> start >> end;
        time[i] = make_pair(start, end);
    }

    sort(time, time + N, compare);

    count = 1; endCnt = time[0].second;
    for(i = 1; i < N; i++) {
        if(endCnt <= time[i].first) {
            endCnt = time[i].second;
            count++;
        }
    }

    for(i = 0; i < N; i++) {
        cout << time[i].first << " " << time[i].second << endl;
    }

    cout << count;
}