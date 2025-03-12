#include <stdio.h>
int main()
{
int even=0,odd=0,i,j,n;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
printf("Enter values:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
even++;
else
odd++;
}
printf("Even: %d\nOdd: %d\n",even,odd);
return 0;
}
