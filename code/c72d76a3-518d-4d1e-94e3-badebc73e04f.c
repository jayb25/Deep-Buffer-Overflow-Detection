#include <stdio.h>
int main() {
   float i=4;
   int j=13;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
