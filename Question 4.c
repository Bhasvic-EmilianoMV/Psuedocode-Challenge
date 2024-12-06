#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[10];
    printf("Enter a string");
    fflush(stdin);
    gets(string);
    char newString[10];
    strcpy(newString,string);
    int end = strlen(string) -1;
    for(int x = 0; x <= strlen(string); x++){
        string[x] = newString[end];
        end = end - 1;
    }
    printf("here is your string reversed: %s",newString);





    return 0;
}
