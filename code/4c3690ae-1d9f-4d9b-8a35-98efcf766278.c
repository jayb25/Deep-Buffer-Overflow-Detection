#include <stdio.h>
int main() {
   int i=0;
   int j=52;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = i%j;
   k = l-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
