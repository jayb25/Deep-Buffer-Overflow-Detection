#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   i = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
