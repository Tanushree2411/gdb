/*#include<stdio.h>//NULL PTR SEG FAULT
#include<stdlib.h>

void main()
{

int *intptr;
//intptr=(int *)malloc(sizeof(int)); //int data type=4 bytes
ptr=NULL;
printf("value at ptr intptr=%d\n",(*intptr));
free(intptr);
}*/


#include<stdio.h>
#include<stdlib.h>//unintialized seg fault

void main()
{

int *intptr;
//intptr=(int *)malloc(sizeof(int)); //int data type=4 bytes
printf("value at ptr intptr=%d\n",(*intptr));
free(intptr);
}



