#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l/j;
   i = k-k*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
