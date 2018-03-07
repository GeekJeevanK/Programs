/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    int c,d,i,j,count=0;
    printf("a\n");
    gets(a);
    printf("b\n");
    gets(b);
    c=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            ++count;
        }
    }
    if(count==c)
        printf("\nAnagram");
        else
        printf("Not Anagram");
    return 0;
}



