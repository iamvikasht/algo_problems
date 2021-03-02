#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int n;
string s="125";
vector<int> m;
 
int calc(int i) {
    if (m[i] == -1) {
        if (i == n) {
            m[i] = 1;
        } else if (s[i] == '0') {
            m[i] = 0;
        } else {
            if (i + 1 == n) {
                m[i] = 1;
            } else if (10 * (s[i] - '0') + (s[i + 1] - '0') <= 26) {
                m[i] = calc(i + 1) + calc(i + 2);
            } else {
                m[i] = calc(i + 1);
            }
        }
    }
    return m[i];
}
 
int main() {
    while ( s != "0") {
        n = s.length();
        m = vector<int>(n + 1, -1);
        cout << calc(0) << endl;
    }
}
 