#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

// Definition of a word: a non whitespace char[] before whitespace char
// Reads a single char: use insideWord to detect words

void main()
{

    int chars = 0;
    int lines = 0;
    int words = 0;
    int whiteSpaces = 0;
    int insideWord = FALSE;
    char c = getchar();

    while ( c != EOF) {
        if (c == '\n') {
            whiteSpaces++;
            // printf("[%d,%d]\n", chars, words, whiteSpaces);
            insideWord = FALSE;
            lines++;
            // printf("%c", c);
        } else {
            chars ++;
            // printf("%c", c);
            if (c == ' ' || c == '\n' || c == '\t') {
                whiteSpaces++;
                insideWord = FALSE;
            } else if (insideWord == FALSE) {
                insideWord = TRUE;
                words++;
            }
        }
        c = getchar();
    }
// printf("[%d,%d,%d,%d]\n", chars, words, whiteSpaces, lines);

}