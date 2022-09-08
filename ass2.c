#include<stdio.h>
#include<string.h>
int length(char*s)
{  
    int i=0;
    while(s[i]!='\0'&&s[i]!='\n')
    {
        i++;
    }
    return i;
}
void swap(char*s,char*t)
{
    char a;
    a=*s;
    *s=*t;
    *t=a;
}
char* reverse(char*s)
{
   int x=length(s)/2;
   int y=length(s);
   int i=0;
   while(i<x)
   {
       swap(&s[i],&s[y-1-i]);
       i++;

   }
   return s;
}
int main()
{
  char str[30];
  printf("Enter the string : ");
  fgets(str,30,stdin);
  if(str[strlen(str)-1]==10)
  str[strlen(str)-1]='\0';
  printf("Reversed string is \"%s\" \n",reverse(str));
  return 0;
}