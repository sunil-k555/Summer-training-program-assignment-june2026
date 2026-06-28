// Write a progrma to convert all the small letters of a string into capital letters........
#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];
    printf("Enter a sentence : \n");
    fgets(sen, sizeof(sen), stdin);
    for (int i = 0; i < strlen(sen); i++)
    {
        if ('a' <= sen[i] && sen[i] <= 'z')
        {
            sen[i] = sen[i] - 32;
        }
    }
    printf("Sentence in capital letters ->\n ");
    for (int i = 0;i< strlen(sen); i++)
    {
        printf("%c", sen[i]);
    }
    return 0;
}