#include <stdio.h>
int main() {
   int i=0;
   int j=144;
   int k;
   int l;
   k = 51;
   l = 54;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
