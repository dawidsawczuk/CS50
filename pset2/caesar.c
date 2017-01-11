#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    if (argc != 2) 
    {
        printf("Usage: ./caesar k\n"); 
        return 1;
    }
    
    int k = atoi(argv[1]);
    
    printf("plaintext:  ");
    string plainText = get_string();
    printf("ciphertext: ");
    
    for (int i = 0, n = strlen(plainText); i < n; i++)
    {
        if (isupper(plainText[i])) 
        {
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
        } else if (islower(plainText[i])) 
        {
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
        } else 
        {
            printf("%c", plainText[i]);
        }
    }
    
    printf("\n");
    return 0;
}