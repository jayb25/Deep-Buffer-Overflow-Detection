#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = i%j;
   l = k+j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
