#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (alphabets will stop input): ");
    scanf("%[^A-Za-z]", str); 

    printf("You entered non-alphabetic characters: %s\n", str);

    return 0;
}