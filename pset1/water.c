#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes, waterUsageInBottles;
    printf("How long did you shower? Please input time in minutes. \n");
    minutes = GetInt();
    waterUsageInBottles = (minutes * 192) / 16;
    printf("You used %d, of 16 ounces bottles of water.\n", waterUsageInBottles);
}