#include "major1.h"

unsigned int reverseBits(unsigned int num) {
   unsigned int numBits = sizeof(num) * 8;
   unsigned int reversedNum = 0;
   for (int i = 0; i < numBits; i++)
   {
      if((num & (1 << i)))
         reversedNum |= 1 << ((numBits - 1) - i);
   }
   return reverse_num;
}
