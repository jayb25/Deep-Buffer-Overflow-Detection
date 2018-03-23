#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l/j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
