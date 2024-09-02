#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t timer = time(NULL);
    struct tm *now = localtime(&timer);
    
    printf("%04d-%02d-%02d\n", 1900 + now->tm_year, 
            now->tm_mon + 1, now->tm_mday);
            
	return 0;
    return 0;
}
