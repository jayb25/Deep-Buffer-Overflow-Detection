#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = 9+j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
