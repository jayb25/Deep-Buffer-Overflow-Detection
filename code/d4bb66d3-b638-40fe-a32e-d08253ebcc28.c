#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%dd\n",k,l);
   return 0;
}
