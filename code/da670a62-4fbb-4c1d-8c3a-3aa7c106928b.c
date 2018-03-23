#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = j/j;
   l = k-j;
   l = j-j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
