#include<stdio.h>
int main()
{
    char name[]={"shahbaz"};
    int hash[250]={0},i;
    for(i=0;name[i]!='\0';i++)
    {
        hash[name[i]]++;
    }
    for(i=0;i<250;i++)
    {
        if(hash[i]!=0)
            printf("%c <<<<<<< %d\n",i,hash[i]);
    }

    return 0;
}