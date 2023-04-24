// wap to print an string in accending order

#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter any name:");
    gets(name);
    int i,j,temp;
    for(i=0;i<49;i++)
    {
        for(j=i+1;name[j]!='\0';j++)
        {
            if(name[i]>name[j])
                {
                    temp=name[i];
                    name[i]=name[j];
                    name[j]=temp;
                }
        }
    }
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}