#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c",&ch);
    if(ch>=67 && ch<=90)
    pritnf("Uppercase");
    else if (ch>=97 && ch<=122)
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}