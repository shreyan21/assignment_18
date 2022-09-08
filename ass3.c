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
int compare(char*s,char*p)
{
        int i=0;
    if(length(s)==length(p))
    {  
        while(s[i])
        {
            if(s[i]>p[i])
            return 1;
            else if(s[i]<p[i])
            return -1;
            i++;
        }
        return 0;
    }
    else if(length(s)<length(p))
    {  
        while(s[i])
        {
            if(s[i]>p[i])
            return 1;
            else if(s[i]<p[i])
            return -1;
            i++;
        }
        return -1;

    }
    else 
    {
        while(p[i])
        {
            if(s[i]>p[i])
            return 1;
            else if(s[i]<p[i])
            return -1;
            i++;
        }
        return 1;
    }
}
int main()
{
    char a[30],b[30];
    printf("Enter the first string : ");
    fgets(a,30,stdin);
    if(a[length(a)]=='\n')
    {
        a[length(a)]='\0';
    }
    fflush(stdin);
    printf("Enter the first string : ");

    fgets(b,30,stdin);
    if(b[length(b)=='\n'])
    {
        b[length(b)]='\0';
    }
    fflush(stdin);
    if(compare(a,b)==-1)
    printf("%s comes before %s in dictionary\n",a,b);
    else if(compare(a,b)==1)
    printf("%s comes after %s in dictionary\n",a,b);
    else
    printf("Both strings are equal\n");
    return 0;


}