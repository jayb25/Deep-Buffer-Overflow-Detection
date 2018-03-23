#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
