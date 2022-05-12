#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
int i;
printf("\n File name : %s\n",argv[8]);
printf("\n total args : %d",argc);
printf("arguments passed\n");
for(i=1;i<argc;i++)
{
printf("%s",argv[i]);
printf("\n");
}
}
