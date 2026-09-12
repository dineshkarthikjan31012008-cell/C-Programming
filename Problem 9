//leetcode problem 9
// To check weather the given number is panlindrome or not
#include <stdbool.h>
bool isPalindrome(int x) {
    
    long long a=x;
    long long d, rev = 0;
    if (x<0)
    return false;
    while (x!=0)
      {
        d=x%10;
        rev=rev * 10 + d;
        x=x/10;
    }
     if (a == rev)
     return true;
     return false;
    
}
