#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 64;
   j = i%j;
   l = i%j;
   l = i-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
