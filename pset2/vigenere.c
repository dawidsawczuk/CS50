#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    //Checking if 1 argument was passed
    if (argc != 2) 
    {
        printf("Usage: ./vigenere k\n"); 
        return 1;
    }
    //Checking every char in argument passed if a letter
    for (int j = 0, n = strlen(argv[1]); j < n; j++) 
    {
        if (!isalpha(argv[1][j])) 
        {
            printf("Usage: ./vigenere k\n"); 
            return 1;    
        }
    }
    
    string key = argv[1];
    int keyLength = strlen(argv[1]);
    
    printf("plaintext:  ");
    string plainText = get_string();
    printf("ciphertext: ");
    
    //Iterating over every char in plain text
    for (int i = 0, keyPosition = 0, n = strlen(plainText); i < n; i++)
    {
        //Getting value of the key for the exact letter
        int keyValue = tolower(key[keyPosition % keyLength]) - 97;
        
        //Ciphering the plain text
        if (isupper(plainText[i])) 
        {
            printf("%c", (((plainText[i] + keyValue) - 65) % 26) + 65);
            keyPosition++;
        } 
        else if (islower(plainText[i])) 
        {
            printf("%c", (((plainText[i] + keyValue) - 97) % 26) + 97);
            keyPosition++;
        } 
        else 
        {
            printf("%c", plainText[i]);
        }
    }
    
    printf("\n");
    
}