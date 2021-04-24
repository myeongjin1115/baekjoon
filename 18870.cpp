#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> X;
vector<int> sorted;

int main() {
    int N, i, input;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> input;
        X.push_back(input);
    }
    sorted = X;

    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    for(i = 0; i < N; i++) {
        cout << lower_bound(sorted.begin(), sorted.end(), X.at(i)) - sorted.begin() << ' ';
    }
}