#include <iostream>
using namespace std;

int main() {
    long n, m;
    
    cin >> n >> m;
    cout << (n-m) * (n-m < 0 ? -1 : 1);
    return 0;
}