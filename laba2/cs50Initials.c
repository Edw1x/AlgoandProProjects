#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    string word = GetString();
    printf("%c",toupper(word[0]));
    for(int i = 0; i < strlen(word); i++)
        {
            if (word[i] == ' ')
            {
                printf("%c",toupper(word[i+1]));
            }
         }
         printf("\n");
}
