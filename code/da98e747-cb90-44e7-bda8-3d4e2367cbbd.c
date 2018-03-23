#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i%j;
   l = k-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
