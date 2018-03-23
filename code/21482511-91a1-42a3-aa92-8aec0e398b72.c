#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",i);
   return 0;
}
