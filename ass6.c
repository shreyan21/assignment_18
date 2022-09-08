#include<stdio.h>
#include<string.h>
int isAlnum(char*s)
{
    int i=0;
    int digit=0,alphabet=0;
    while(s[i]!='\0'&&s[i]!='\n')
    {
        if(s[i]>=48&&s[i]<=57)
        {
            digit++;
            i++;
        }
        else if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
        {
            alphabet++;
            i++;
        }
        else
        {
            return 0;
        }
    }
    if(digit&&alphabet)
    {
        return 1;
    }
    
    return 0;
}
int main()
{
    char str[30];
    printf("Enter the string : ");
    fgets(str,30,stdin);
    if(str[strlen(str)-1]=='\n')
    {
        str[strlen(str)-1]='\0';
    }
    if(isAlnum(str))
    {
        printf("%s is an alphanumeric string\n",str);
    }
    else
    {
        printf("%s is not an alphanumeric string\n",str);
    }
return 0;
}