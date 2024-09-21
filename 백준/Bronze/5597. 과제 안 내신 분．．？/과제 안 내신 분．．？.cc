#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> vec(30);
    
    for(int i=0; i<28; i++){
        cin >> n;
        vec[n-1]++;
    }
    
    for(int i=0; i<30; i++){
        if(!vec[i]){
            cout << i+1 << "\n";
        }
    }
    
    return 0;
}