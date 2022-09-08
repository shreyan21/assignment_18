#include<stdio.h>
int length(char*s)
{  
    int i=0;
    while(s[i]!='\0'&&s[i]!='\n')
    {
        i++;
    }
    return i;
}
int isPalindrome(char*s)
{
    int i=0;
    int x=length(s)-1;
    while(i<length(s)/2)
    {
        if(s[i]==s[x-i]||s[i]==s[x-i]-32||s[i]==s[x-i]+32)
        {
            i++;
        }
        else
        {
           return 0;
        }
    }
    return 1;
}
int main()
{   
    char s[30];
    printf("Enter the string : ");
    fgets(s,30,stdin);

    if(s[length(s)]=='\n')
    {
        s[length(s)]='\0';
    }
    
    if(isPalindrome(s))
    {
        printf("%s is palindromic string\n",s);
    }
    else
    {
        printf("%s is not an palindromic string\n",s);
       
    }
    return 0;
}