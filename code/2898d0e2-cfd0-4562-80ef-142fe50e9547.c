#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = k-j*j;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
