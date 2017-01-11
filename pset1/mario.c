#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int height;
    int k = 0;
    
    do {
        printf("Please input an integer between 1 and 23: ");
        height = GetInt();
    }
    
    while (height < 1 || height > 23);

    for(int i = height; i > 0; i--)               
    {
        for(int j = 0; j < i - 1; j++)                  
        {
            printf(" ");

        }
        
        printf("#");
        k++;
        
        for (int l = 0; l < k; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}