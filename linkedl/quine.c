#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    // Open the source file (itself) in read mode
    fp = fopen("quine.c", "r");  // replace "quine.c" with your filename
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    // Read character by character and print
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
