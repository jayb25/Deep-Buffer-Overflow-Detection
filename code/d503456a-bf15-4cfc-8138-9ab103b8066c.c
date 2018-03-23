#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   i = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
