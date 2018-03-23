#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k%j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
