#include <stdio.h>

// if current char is space and next is not, don't append current char

int main()
{
   char text[200], target[200];
 
   while ((fgets(text, 200, stdin)) != NULL) {
   int c = 0, d = 0;

   while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] != ' ')) {
        target[d] = text[c];
        d++;
      }
      c++;
   }
 
   target[d] = '\0';
 
   printf("%s", target);
   } 
   return 0;
}