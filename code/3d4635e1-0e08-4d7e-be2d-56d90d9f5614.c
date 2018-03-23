#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
