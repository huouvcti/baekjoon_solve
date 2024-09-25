#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for(int i=0; i<str.length(); i++){
        if(str[i] <= 'Z'){
            str[i] += 32;
        } else {
            str[i] -= 32;
        }
    }
    
    cout << str;
    return 0;
}