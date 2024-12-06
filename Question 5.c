#include <stdio.h>
#include <math.h>
int main(void)
{
    int number;
    printf("Please enter a number");
    fflush(stdin);
    scanf("%d",&number);
    int prime = 1;
    if((number % 2) == 0)
    {
        prime = 0;
    }
    if(prime == 1)
    {
        for(int x = 0; x < sqrt(number); x++)
        {
         


        }
    }







    return 0;
}
