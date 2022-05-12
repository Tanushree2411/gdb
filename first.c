#include<stdio.h>
#include<string.h>
struct student
{

int roll;
char name[40],gender;
float height;
}first;

int main()
{
struct student second;
struct student third={103,"hari prasad" ,'m',5.11};
printf("\n rpll\tname\t\t\tgender\theight\n");
first.roll=101;
strcpy(first.name,"phendar");
first.gender='M';
first.height=5.0;
printf("\n %3d\t %.40s\t%c\t%1.2f",first.roll,first.name,first.gender,first.height);
printf("\n %3d\t %.40s\t%c\t%1.2f",third.roll,third.name,third.gender,third.height);
}

