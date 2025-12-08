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

    int X;
    cin >> X;

    int j = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != X) {
            v[j++] = v[i];
        }
    }
    v.resize(j);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
