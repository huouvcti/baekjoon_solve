#include <iostream>
#include <string>
using namespace std;

int main() {
    int str;
    
    while(1){
        str = getchar();
        if(str == EOF) break;
        putchar(str);
    }
    return 0;
}