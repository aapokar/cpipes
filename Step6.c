#include <stdio.h>

// if current char is space and next is not, don't append current char

int main()
{
    char c;
    while((c=getc(stdin))!=EOF) {
        char d;

        // if the character starts with '/', it 'could' be a comment
        if( c == '/')   
        {
            // if the next character we read is '/', it is the beginning of comment
            if((d=getc(stdin))=='/')   
            {
                char e;
                while((e=getc(stdin))!=EOF)
                {
                    if(d=='\n')
                    return;
                }
            }
            else
            {
                printf(c);
                printf(d);
            }
        }

    // again, if all above fails, we add the character as it is in the new file.
        else
            printf(c);
        }

}