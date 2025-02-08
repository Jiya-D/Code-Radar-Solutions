#include <stdio.h>
int main()
{
 int n,c=1,i;
 scanf("%d",&n);

if(i<2)
c=1;
else
{
for(i=2;i<=n;i++)
 {
    if(n%i==0)
    c=0;
    break;
 }
}
 if(c==0)
 printf("Not Prime");
 else
 printf("Prime");

 return 0;
 
}