#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%dd\n",k,l);
   return 0;
}
