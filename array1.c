#include<stdio.h>
void main()
{
    int arr[3];
    printf("enter elements;");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<3; i++)
    {
        printf("elements%d\n",arr[i]);
    }
}