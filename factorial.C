#include<stdio.h>
int main()
int n,i;
unsigned long long factorial=1;
printf("Enter an integer:\n");
scanf("%d",&n);
if(n<0)
printf("oops!!!...There is an error...\n");
else
{
for(i=1;i<=n;++i)
{
factorial*=i;
}
printf("factorial of %d =%llu,n,factorial);
}
return 0;
}
