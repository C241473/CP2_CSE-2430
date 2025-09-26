#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // First uppercase letters, then lowercase
    for (char c = 'A'; c <= 'Z'; c++) {
        if (freq[c] > 0) {
            cout << c << " " << freq[c] << "\n";
        }
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (freq[c] > 0) {
            cout << c << " " << freq[c] << "\n";
        }
    }

    return 0;
}

