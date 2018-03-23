#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i%j;
   l = i+j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
