#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 1000

// Reads stdin
// Checks if on the read line is a non whitespace character
// If not, prints it to stdout

int isEmpty(const char *str)
{
    char ch;
    do
    {
        ch = *(str++);
        // Check non whitespace character
        if(ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
            return 0;

    } while (ch != '\0');

    return 1;
}


void Step2()
{

    char buffer[BUFFER_SIZE];

    while ((fgets(buffer, BUFFER_SIZE, stdin)) != NULL)
    {
        if(!isEmpty(buffer))
            printf(buffer);
    }
}