#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = i-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
