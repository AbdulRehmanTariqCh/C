/*
Write a program which should take an organization name from the user and then print the abbreviation on the screen.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[40],store[40];
    printf("Enter the name of any organization: ");
    gets(name);
    store[0]=name[0];
    printf("%c.",store[0]);
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]==' ')
            {
                store[i]=name[i+1];
                printf("%c.",store[i]);
            }
    }

    system("pause");
    return 0;
}
