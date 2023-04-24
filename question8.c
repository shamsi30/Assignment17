#include<stdio.h>
int main()
{
    char s[50];
    int i,alp=0,dig=0,spl=0;
    printf("Enter a name with digits and special chracter:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
        {
            alp++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
            dig++;
        }
        else
        {
            spl++;
        } 
    }
    printf("Total number of alphabets=%d\n",alp);
    printf("Total number of digits=%d\n",dig);
    printf("Total number of special chracter=%d",spl);
    return 0;
}