// wap to find frequency of every chracter.

#include<stdio.h>
int main()
{
    char name[]="abacgfsrabc";
    char hash[150]={0};
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        hash[name[i]]++;
    }
    for(i=0;i<123;i++)
    {
        if(hash[i]>0)
            printf(" %c <<<<<< %d'times\n",i,hash[i]);
    }
    return 0;
}