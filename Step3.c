#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 1000

void main() 
{
    char buffer[BUFFER_SIZE];
    while ((fgets(buffer, BUFFER_SIZE, stdin)) != NULL)
    {
    int index, i;
    index = -1;
    /* Find last index of non-white space character */
    i = 0;
    while(buffer[i] != '\0')
    {
        if(buffer[i] != ' ' && buffer[i] != '\t' && buffer[i] != '\n')
        {
            index= i;
        }
        i++;
    }
    /* Mark next character to last non-white space character as null */
    buffer[index + 1] = '\n';
    printf("%s",buffer);
    }
}