#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = i%j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
