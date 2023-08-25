#include <stdio.h>
#include <string.h>

int main() {
   char str1[100], str2[200];
   int i, j=0;

   printf("Enter a string: ");
   gets(str1);

   for(i=0; i<strlen(str1); i++) {
      str2[j] = str1[i];
      j++;
      str2[j] = ' ';
      j++;
   }
   str2[j] = '\0';

   printf("String with spaces: %s\n", str2);

   return 0;
}

//#include <stdio.h>
//#include <string.h>

/*int main() {
   char str1[100], str2[200];
   int i, j=0;

   printf("Enter a string: ");
   gets(str1);

   for(i=0; i<strlen(str1); i++) {
      str2[j] = str1[i];
      j++;
      str2[j] = ' ';
      j++;
   }
   str2[j] = '\0';

   printf("String with spaces: %s\n", str2);

   return 0;
}*/