#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l+j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%dd\n",k,l);
   return 0;
}
