#include<stdio.h>
int main()
{
    char name[]={"lambhorgini"};
    int i,count=0,length=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
                length++;
        else
            count++;
    }
    printf("the total numbers of consonants in '%s' are %d",name,count);
    return 0;
}
