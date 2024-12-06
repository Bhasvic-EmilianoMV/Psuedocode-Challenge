
#include <stdio.h>

int main(void)
{
    int list[6]= {1,2,3,4,5};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + list[i];
    }
    printf("Sum is: %d",sum);








    return 0;
}
