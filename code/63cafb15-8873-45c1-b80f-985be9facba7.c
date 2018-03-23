#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = k/j;
   l = l%j;
   l = i-j;
   k = --k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
