#include <stdio.h>
int main() {
   float i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   i = l/j;
   l = k%j;
   l = k%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
