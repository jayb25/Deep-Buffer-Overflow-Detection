#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-4*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
