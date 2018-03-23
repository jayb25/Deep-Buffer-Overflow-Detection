#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
