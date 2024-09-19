#include <iostream>
# include <vector>
using namespace std;

int main() {
    int n, v, count=0;
    cin >> n;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++) cin >> vec[i];
    cin >> v;
    for (int i = 0; i < n; i++){
        if(vec[i] == v) count++;
    }
    cout << count;
    return 0;
}