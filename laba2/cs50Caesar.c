#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(int argc, string argv[])
{   
   if(argc != 2)
   {
        return 1;
   }
   int k = atoi(argv[1]);
    printf("give me the word\n");  
    string word = GetString();                          
      printf("ciphertext: ");                   
    for(int i = 0; i < strlen(word); i++)               
    {
        if (word[i] < 65 || (word[i] > 90 && word[i] < 97) || word[i] > 122 )
        {
            printf("%c", word[i]);
        }
        else
        {
            if (word[i] >= 65 && word[i] <= 90)
            {       
                word[i] = (((word[i] - 65 + k) % 26) + 65);
                printf("%c", word[i]);
            }
            else if (word[i] >= 97 && word[i] <= 122)
            { 
               word[i] = (((word[i] - 97 + k) % 26) + 97);
               printf("%c", word[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
