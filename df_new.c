#include<stdio.h>
#include<stdlib.h>

void buggy(int *p)//fun using that value
{
p[0]=10;//using to addr
free(p);//free ptr
}

int main()
{
int *ptr;
ptr=(int *)malloc(4); //creating 4 bytes
buggy(ptr);//passing addr of 4 bytes to through a ptr
free(ptr);//double free,freed again same ptr
}
