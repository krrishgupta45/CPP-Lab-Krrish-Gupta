#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int X, P;
    cin >> X >> P;

    v.insert(v.begin() + P, X);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
