#include<stdio.h>
int main()
{
    char name[]={"zafrul"},i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=97 && name[i]<=122)
            name[i]=name[i]-32;
    }
    printf("converted name in uppercase is %s",name);
    return 0;
}