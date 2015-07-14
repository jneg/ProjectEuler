#include <stdio.h>
#include <stdlib.h>

static const long NUM = 600851475143;

long Lpf(long num) {
   long lpf = 2;

   while (num > lpf) {
      if (num % lpf == 0) {
         num /= lpf;
         lpf = 2;
      }
      else {
         ++lpf;
      }
   }

   return lpf;
}

int main() {
   printf("The largest prime factor of %ld is %ld.\n", NUM, Lpf(NUM));

   return EXIT_SUCCESS;
}
