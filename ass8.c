# include<stdio.h>
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
    char s[40];
    printf("Enter the string : ");
    fgets(s,30,stdin);

    if(s[length(s)]=='\n')
    {
        s[length(s)]='\0';
    }
    printf("Total no of words in \"%s\" are %d\n",s,words(s));
    return 0;

}