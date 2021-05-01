#include <iostream>
using namespace::std;
using ll = long long;
long long check(long long, long long);

//A2
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (check(A, B + C + D))return 0;
    else if (check(A + B, C + D))return 0;
    else if (check(A + B + C, D))return 0;
    else if (check(B, A + C + D))return 0;
    else if (check(B + C, A + D))return 0;
    else if (check(B + C + D, A))return 0;
    else if (check(C, A + B + D))return 0;
    else if (check(C + D, A + B))return 0;
    else if (check(A + C, B + D))return 0;
    cout << "No" << endl;
    return 0;
}


long long check(long long in, long long out) {
    if (in == out) {
        cout << "Yes" << endl;
        return 1;
    }
    else return 0;
}
