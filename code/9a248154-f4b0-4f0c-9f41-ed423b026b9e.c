#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = k-k*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
