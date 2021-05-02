#include <iostream>
#include <algorithm>
using namespace::std;
using ll = long long;
long long check(long long, long long);

//A2
int main() {
    long long data[4];
    for (auto i = 0; i < 4; i++) cin >> data[i];
    sort(data,data+4);
    if (check(data[0] + data[3], data[1] + data[2]) || check(data[3], data[0] + data[1] + data[2]))return 0;
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
