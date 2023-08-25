
#include <stdio.h>

int main() {
   FILE *fp;
   char ch;

   // Writing to a file using while loop
   fp = fopen("file.txt", "w");
   printf("Enter a paragraph:\n");
   while((ch = getchar()) != EOF) {
       putc(ch, fp);
   }
   fclose(fp);

   // Reading from a file
   fp = fopen("file.txt", "r");
   printf("File content:\n");
   while((ch = getc(fp)) != EOF) {
       putchar(ch);
   }
   fclose(fp);

   return 0;
}

