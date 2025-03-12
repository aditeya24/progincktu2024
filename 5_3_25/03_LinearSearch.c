#include <stdio.h>
int main()
{
int sk,i,n,index=-1;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
printf("Enter values:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter search key: ");
scanf("%d",&sk);
for(i=0;i<n;i++)
{
if(a[i]==sk)
{
index=i;
break;
}
}
if(index!=-1)
printf("Value found at index %d\n",index);
else
printf("Value not found\n");
return 0;
}
