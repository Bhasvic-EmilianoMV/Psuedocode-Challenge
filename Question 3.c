#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    printf("Enter a string");
    fflush(stdin);
    gets(sentence);
    char vowels[6] = {'a','e','i','o','u'};
    int count = 0;
    for(int i = 0; i <= strlen(sentence); i++){
        for(int x = 0; x <= 4; x++){
            if(sentence[i] == vowels[x]){
                count++;
            }
        }
    }
    printf("The vowel count in your input is: %d",count);







    return 0;
}
