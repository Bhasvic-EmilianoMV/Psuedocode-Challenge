#include <stdio.h>

int main(void)
{
    int list[11]= {4,65,2,42,5,2,2,143,72,76};
    int max = -1;
    for (int i = 0; i < 10; i++){
        if(list[i] > max){
            max = list[i];
        }
    }
    printf("max value: %d",max);







    return 0;
}
