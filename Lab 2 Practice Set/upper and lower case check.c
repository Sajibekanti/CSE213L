#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   // for upper case
   printf("\nEnter a Character : ");
   gets(s);

   // for low case
   printf("\nEnter a Character : ");
   gets(s);
   // upper case
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   // low case
   else if(s[i] >= 'A' && s[i] <= 'Z')

         s[i] = s[i] + 32;


// low case
      printf("\nString in Lower Case = %s", s);
      // upper case
   printf("\nString in Upper Case = %s", s);

   return 0;
}
