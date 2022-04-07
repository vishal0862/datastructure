#include<stdio.h>
void main()
{
    int a;
char b;
do
{
printf("\nchoice");
scanf("%d",&a);
switch(a)
{
case 1:     printf("one");
            break;
case 2:     printf("two");
            break;
case 3: 
            printf("three");
            break;
default: printf("\n wrong choice");
}
printf("\n Do you want to continue?(y/n)\n");
scanf("\n %c",&b);
}while(b=='y');
//return 0;
}