#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = k-j;
   k = k-i*l;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
