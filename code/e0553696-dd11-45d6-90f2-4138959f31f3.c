#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = l-i;
   l = --k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
