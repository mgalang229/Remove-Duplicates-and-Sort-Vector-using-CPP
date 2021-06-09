#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());
    for (int i = 0; i < (int) a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}
