#include <stdio.h>
int main()
{
int sum=0, min, max, avg, i, j, n;
printf("Enter n: ");
scanf("%d",&n);
int a[n];
printf("Enter values:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
min=a[0];
max=a[0];
avg=sum/n;
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("Sum: %d\nAvg: %d\nMin: %d\nMax: %d\n",sum,avg,min,max);
return 0;
}
