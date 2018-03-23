#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   j = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
