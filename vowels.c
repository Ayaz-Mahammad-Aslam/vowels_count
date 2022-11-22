/*write a program to correct the vowels in an input string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,c=0;
    printf("Input a string");
    scanf("%[^\n]",&str);
    i = 0;
    while(str[i] != '\0')
    {
        switch(str[i])
        {
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : c++;
            break ;
        }
        i++;
    }
    printf("vowel count : %d\n",c);
    return 0;
}