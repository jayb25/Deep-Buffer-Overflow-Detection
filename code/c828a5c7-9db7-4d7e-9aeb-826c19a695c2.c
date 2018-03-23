#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 543;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
