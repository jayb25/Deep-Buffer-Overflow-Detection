#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = k/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = i-j;
   k = j-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
