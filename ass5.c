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
void lowerConvert(char*s)
{
    int i=0;
    while(s[i])
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]+=32;
        }
        i++;
    }

}
int main()
{
    char a[30];
    printf("Enter the string : ");
    fgets(a,30,stdin);
    if(a[length(a)]=='\n')
    {
        a[length(a)]='\0';
    }
    fflush(stdin);
    lowerConvert(a);
    printf("Lowercase is %s\n",a);
    return 0;
}