#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 533;
   l = 64;
   k = l/j;
   l = i%j;
   l = i-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
