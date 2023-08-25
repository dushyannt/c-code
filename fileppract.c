#include <stdio.h>

int main() {
   FILE *input, *output;
   int num, sum = 0;

   // Open input file for reading
   input = fopen("input.txt", "w");
   if (input == NULL) {
      printf("Error opening input file.");
      return 1;
   }

    for(i=0;)
   // Open output file for writing
   output = fopen("output.txt", "wb");
   if (output == NULL) {
      printf("Error opening output file.");
      return 1;
   }

   // Read integers from input file and calculate sum
   while ((num = getw(input)) != EOF) {
      sum += num;
   }

   // Write sum to output file
   putw(sum, output);

   // Close files
   fclose(input);
   fclose(output);

   return 0;
}