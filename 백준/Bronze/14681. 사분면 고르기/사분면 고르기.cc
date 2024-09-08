#include <iostream>

using namespace std;

int main() {
    int x, y;
    
    cin >> x;
    cin >> y;
    cout << (y>0 ? 1 : 3) + ((x*y)>0 ? 0: 1);
    
    return 0;
}