#include <stdio.h>
int main() {
   float i=4;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-k*k;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
