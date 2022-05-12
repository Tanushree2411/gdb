#include<stdio.h>
#include<stdlib.h>

void buggy()
{

int *intptr;
intptr=(int *)malloc(sizeof(int)); //int data type=4 bytes
*intptr=100;
printf("value at ptr intptr=%d\n",(*intptr));
free(intptr);//we free here dynamic memeory allocated ptr
*intptr=67;//trying to derefer here
}

int main()
{
buggy();
return 0;
}
