#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = i+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
