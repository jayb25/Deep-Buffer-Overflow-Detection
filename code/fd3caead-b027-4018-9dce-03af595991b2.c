#include <stdio.h>
int main() {
   float i=4;
   int j=34;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
