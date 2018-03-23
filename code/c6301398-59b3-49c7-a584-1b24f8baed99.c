#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k+j;
   l = i%j;
   l = l-j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
