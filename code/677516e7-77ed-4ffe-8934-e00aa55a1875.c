#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
