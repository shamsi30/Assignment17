// wap to reverse a string 

#include<stdio.h>
int main()
{
    char name[20];
    int i,t,l;
    printf("Enter a string:");
    gets(name);
    //scanf("%[^\n]",name);
    //fgets(name,20,stdin);
    for(l=0;name[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=name[i];
        name[i]=name[l-i-1];
        name[l-i-1]=t;
    }
    printf("new string in reverse order:%s",name);
    return 0;
}