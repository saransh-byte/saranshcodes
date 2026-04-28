#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Count length of string */
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Entered string: %s", str);
    printf("Length of the string: %d\n", length);

    return 0;
}
