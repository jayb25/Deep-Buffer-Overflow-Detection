#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 5+3;
   l = 64;
   k = i/j;
   l = i/j;
   l = 1/j;
   l = l/j;
   l = l%j;
   l = j%j;
   k = i-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
