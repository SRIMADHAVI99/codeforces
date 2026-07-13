#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long xK, yK;
        cin >> xK >> yK;

        long long xQ, yQ;
        cin >> xQ >> yQ;

        set<pair<long long, long long>> kingPositions;
        set<pair<long long, long long>> queenPositions;

        int dx[] = {1, 1, -1, -1};
        int dy[] = {1, -1, 1, -1};

        for (int i = 0; i < 4; i++)
        {
            kingPositions.insert({xK + dx[i] * a, yK + dy[i] * b});
            kingPositions.insert({xK + dx[i] * b, yK + dy[i] * a});

            queenPositions.insert({xQ + dx[i] * a, yQ + dy[i] * b});
            queenPositions.insert({xQ + dx[i] * b, yQ + dy[i] * a});
        }

        int count = 0;

        for (auto position : kingPositions)
        {
            if (queenPositions.count(position))
            {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
