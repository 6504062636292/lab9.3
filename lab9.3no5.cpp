#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[200];
    int sum = 0;

    printf("Enter input: ");
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++) {
        if (isdigit(text[i])) {
            sum += (text[i] - '0');
        }
    }

    printf("Sum of digit char: %d\n", sum);

    return 0;
}
