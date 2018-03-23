#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 554;
   l = 64;
   l = i/j;
   l = j%j;
   l = i+j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
