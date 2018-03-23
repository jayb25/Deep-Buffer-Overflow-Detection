#include <stdio.h>
int main() {
   int i=0;
   int j=3;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   l = 6-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
