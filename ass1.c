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
int main()
{
   char str[30];  
   printf("Enter the string : ");
   fgets(str,30,stdin);
   printf("Length is %d\n",length(str));
   return 0;
}