#include <stdio.h>
#define MAX 50

int countVowel(char []);

int main() {
    char text[MAX];
    int cVowel;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text);
    printf("\nTotal vowels: %d\n", cVowel);
}

int countVowel(char t[]) {
    int i = 0, total = 0;

    int a = 0, e = 0, i_v = 0, o = 0, u = 0;

    while (i < MAX && t[i] != '\0') {
        if (t[i] == 'A' || t[i] == 'a') { a++; total++; }
        else if (t[i] == 'E' || t[i] == 'e') { e++; total++; }
        else if (t[i] == 'I' || t[i] == 'i') { i_v++; total++; }
        else if (t[i] == 'O' || t[i] == 'o') { o++; total++; }
        else if (t[i] == 'U' || t[i] == 'u') { u++; total++; }
        i++;
    }

    printf("Text : [%s]\n", t);
    printf("A/a: %d\n", a);
    printf("E/e: %d\n", e);
    printf("I/i: %d\n", i_v);
    printf("O/o: %d\n", o);
    printf("U/u: %d\n", u);

    return total;
}
