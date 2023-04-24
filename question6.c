#include<stdio.h>
int main()
{
    char name[]={"ZAFRUL"},i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i]<=90)
            name[i] = name[i] + 32;
    }
    printf("Converted name in lower case : %s",name);
    return 0;
}