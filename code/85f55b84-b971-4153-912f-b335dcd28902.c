#include <stdio.h>
int main() {
   float i=0;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
