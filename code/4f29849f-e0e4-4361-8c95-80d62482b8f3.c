#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   l = j-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
