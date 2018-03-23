#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
