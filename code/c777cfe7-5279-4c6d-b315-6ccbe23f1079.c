#include <stdio.h>
int main() {
   float i=0;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-i*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
