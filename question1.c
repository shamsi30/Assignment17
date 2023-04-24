#include<stdio.h>
#include<string.h>
int main()
{
    char a[12],i,length=0;
    printf("Enter your name in lowercase:");
    //scanf("%s",a); //space ko scan nhi kr payega.
    //scanf("%[^\n]",a); //space ko scan kr lega.
    fgets(a,12,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        //length++;
        length=strlen(a);
    }
    printf("The length of the string is %d",length);
    return 0;
}   