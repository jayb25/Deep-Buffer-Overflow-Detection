#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i-j;
   k = k-k*k;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
