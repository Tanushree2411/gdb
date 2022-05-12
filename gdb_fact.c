#include<stdio.h>
#include<stdlib.h>

int main()
{
int num;
do{
printf("enter a no");
scanf("%d",&num);
}while(num<0);

int fact;//error as not initialized
for(int t=1;t<=num;t++)

fact=fact*t;
printf("%d =%d\n",num,fact);
return 0;
}

