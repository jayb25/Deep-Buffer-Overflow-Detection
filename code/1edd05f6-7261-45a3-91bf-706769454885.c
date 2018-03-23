#include <stdio.h>
int main() {
   int i=0;
   int j=18;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
