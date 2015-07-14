#include <stdio.h>
#include <stdlib.h>

static const int NUM_MAX = 999;
static const int NUM_MIN = 0;

int IsPalindrome(int num);
void PrintOutput(int num);

int main() {
   int i, j, product, largestPalindrome = 0;

   for (i = NUM_MAX; i > NUM_MIN; --i) {
      for (j = NUM_MAX; j > NUM_MIN; --j) {
         product = i * j;
         if (product > largestPalindrome && IsPalindrome(product)) {
            largestPalindrome = product;
         }
      }
   }

   PrintOutput(largestPalindrome);

   return EXIT_SUCCESS;
}

int IsPalindrome(int num){
   int n = num, rev = 0;

   while (num) {
      rev *= 10;
      rev += num % 10;
      num /= 10;
   }

   return n == rev;
}

void PrintOutput(int num) {
   printf("The largest palindrome product of %d is %d.\n", NUM_MAX, num);
}
