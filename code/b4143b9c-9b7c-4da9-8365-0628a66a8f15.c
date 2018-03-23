#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = j%j;
   l = i%j;
   l = k%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
