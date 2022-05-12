#include<stdio.h>
#include<string.h>
struct A
{
int roll;//4 bytes
char name[40],gender __attribute__((aligned(2)));
float height;//4 bytes//total 48 as per normal but 52 coz of memory padding coz to access a chara you need to full the blockof 4
}__attribute__((packed));

int main()
{
struct A first;
printf("size of strcut A is %d",sizeof(first));
}

