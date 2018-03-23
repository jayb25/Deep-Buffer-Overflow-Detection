#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 54;
   k = k/j*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
