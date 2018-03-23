#include <stdio.h>
int main() {
   int i=00;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i%j;
   l = i+j;
   l = i-j*j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
