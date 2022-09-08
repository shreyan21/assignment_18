#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char*s,char*p)
{
    char temp[20];
        
    strcpy(temp,s);
    strcpy(s,p);
    strcpy(p,temp);
}
char* reverse(char*s)
{
    int i=0;
    int j=0,k=0;
    char (*a)[20]=(char(*)[20])calloc(200,1);
    while(s[i])
    {
         a[j][k]=s[i];
         k++;
         i++;
         if(s[i]==32)
         {
            a[j][k]='\0';
            j++;
            k=0;
            i++;
         }
    }
    a[j][k]='\0';
    int x=j/2;
    i=0;
    while(i<=x)
    {   
        swap(a[i],a[j-i]);
        i++;
    }
    return (char*)a;
}
int length(char*s)
{  
    int i=0;
    while(s[i]!='\0'&&s[i]!='\n')
    {
        i++;
    }
    return i;
}
int words(char*s)
{
    int i=0;
    int count=0;
    while(s[i])
    {
        if(s[i]==32)
        {
            count++;
        }
        i++;
    }
    return count+1;
}
int main()
{
    char s[200];
    printf("Enter the string : ");
    fgets(s,200,stdin);

    if(s[length(s)]=='\n')
    {
        s[length(s)]='\0';
    }
    char(*a)[20]=(char(*)[20])reverse(s);
    int i=words(s);
    for(int j=0;j<i;j++)
    {
        printf("%s ",a[j]);
    }
    getchar();
    return 0;
}