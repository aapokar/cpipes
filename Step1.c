#include <stdio.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

// Definition of a word: a non whitespace char array before whitespace char
// Reads a single char: use insideWord to detect words
/* block comment */


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
            insideWord = FALSE;
            lines++;

        } else {
            chars ++;

            if (c == ' ' || c == '\t') {
                whiteSpaces++;
                insideWord = FALSE;
            } else if (insideWord == FALSE) {
                insideWord = TRUE;
                words++;
            }
        }
        c = getchar();
    }
printf("chars:%d\nwords:%d\nwhites:%d\nlines:%d]\n", chars, words, whiteSpaces, lines);

}