#include <iostream>
#include<algorithm>
using namespace::std;
using ll = long long;


//B1
int main() {
    long N;
    
    cin >> N;
    long*a= new long[N];
    for (long i = 0; i < N; i++)  cin >> a[i];
    while (true) {
        sort(a, a + N);
        if (a[0] == a[N - 1])break;
        for (int i = N - 1; i > 0; i--) {
            if (a[0] == a[i])break;
            a[i] -= a[0];
            if (a[0] > a[i])break;
            a[i] -=int((a[i]-1)/a[0])*a[0];
        }
    }
    cout << a[0] << endl;

    delete[] a;

    return 0;
}
