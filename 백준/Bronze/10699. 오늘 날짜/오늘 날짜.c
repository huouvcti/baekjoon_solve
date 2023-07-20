#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t seconds = time(NULL);
    struct tm *now = localtime(&seconds);
    
    printf("%04d-%02d-%02d\n", 1900 + now->tm_year, 
            now->tm_mon + 1, now->tm_mday);
            
	return 0;
}