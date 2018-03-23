#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = i%3;
   l = j%j;
   l = i-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
