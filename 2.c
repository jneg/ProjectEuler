#include <stdio.h>
#include <stdlib.h>

static const int FIBONACCI_MAX = 4000000;

// Returns the next fibonacci number.
int NextFibonacci() {
   static int prev[2] = {0, 1};
   int next;

   next = prev[0] + prev[1];
   prev[0] = prev[1];
   prev[1] = next;

   return next;
}

int main() {
   int sum = 0, fib;

   while ((fib = NextFibonacci()) < FIBONACCI_MAX) {
      if (fib % 2 == 0) {
         sum += fib;
      }
   }

   printf("The sum of the even fibonacci numbers less than %d is: %d\n",
    FIBONACCI_MAX, sum);

   return EXIT_SUCCESS;
}
