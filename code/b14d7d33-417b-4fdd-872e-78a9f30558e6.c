#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 34;
   k = 5/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l/j;
   l = j%j;
   l = l%j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
