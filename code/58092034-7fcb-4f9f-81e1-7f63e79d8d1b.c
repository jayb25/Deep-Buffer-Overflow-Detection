#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = j-j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
