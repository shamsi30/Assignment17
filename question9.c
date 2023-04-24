#include<stdio.h>
#include<string.h>
int main()
{
    char name[6]={"chand"},a[10];
    int i=0;
    while(name[i]!='\0')
    {
        a[i]=name[i];
        i++;
    }
    a[i]='\0';
    printf("Copied string is %s",a);
    return 0;
}