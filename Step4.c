#include <stdio.h>

// if current char is space and next too, don't append current char

int main()
{
   char text[100], target[100];
 
   while ((fgets(text, 100, stdin)) != NULL) {
   int c = 0, d = 0;

   while (text[c] != '\0')
   {
      if (!(text[c] == ' ' && text[c+1] == ' ')) {
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