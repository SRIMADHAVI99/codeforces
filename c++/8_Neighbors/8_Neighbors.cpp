#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char A[101][101];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    X--;
    Y--;

    bool ok = true;

    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++) {
        int nx = X + dx[i];
        int ny = Y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                ok = false;
                break;
            }
        }
    }

    if (ok)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
