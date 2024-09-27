#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    double score;
    
    cin >> s;
    
    switch (s[0]) {
      case 'A':
        score += 4;
        break;
      case 'B':
        score += 3;
        break;
      case 'C':
        score += 2;
        break;
      case 'D':
        score += 1;
        break;
      default:
        break;
    }
    
    switch (s[1]) {
      case '+':
        score += 0.3;
        break;
      case '-':
        score -= 0.3;
        break;
      default:
        break;
    }
    
    printf("%0.1f", score);
      
    return 0;
}