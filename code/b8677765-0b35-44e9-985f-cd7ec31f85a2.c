#include <stdio.h>
int main() {
   int i=44;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 644;
   l = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
