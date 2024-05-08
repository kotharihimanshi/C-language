#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Display (char tru[]);
int main()
{
    char str[30];
    printf("Enter the string:");
    gets(str);
    Display(str);
    return 0;
}
void Display(char tru[])
{
    int ccount=0,vcount=0;
    for(int i=0;i<strlen(tru);i++)
    {
        tru[i]=toupper(tru[i]);
        if(tru[i]=='A' || tru[i]=='E' || tru[i]=='I' || tru[i]=='O' || tru[i]=='U')
        vcount++;
        else
        ccount++;
    }
    printf("No of vowels are %d\n",vcount);
    printf("No of consonants are %d",ccount);
}

