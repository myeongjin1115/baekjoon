#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000 + 1;

int C[MAX_SIZE][MAX_SIZE];

int minimum(int i, int j)
{
    if (i > j)
        return j;
    else
        return i;
}

int binomial(int n, int k)
{
    int i, j, m;
    for (i = 0; i <= n; i++)
    {
        m = minimum(i, k);
        for (j = 0; j <= m; j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] % 10007 + C[i - 1][j] % 10007) % 10007;
        }
    }

    return C[n][k];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    int result;

    cin >> N >> K;

    result = binomial(N, K);

    cout << result << '\n';
}