#include <stdio.h>
int main() {
   int i=0;
   int j=114;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-k*j;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
