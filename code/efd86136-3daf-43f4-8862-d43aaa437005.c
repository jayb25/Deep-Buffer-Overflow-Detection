#include <stdio.h>
int main() {
   int i=44;
   int j=11;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
