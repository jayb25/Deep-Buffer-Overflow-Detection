#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   k = l%j;
   l = l%j;
   k = j-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
