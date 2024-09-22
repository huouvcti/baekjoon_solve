#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            vec[i][j] = x;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            cout << vec[i][j] + x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}