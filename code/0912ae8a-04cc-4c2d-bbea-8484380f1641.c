#include <stdio.h>
int main() {
   int i=04;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = l/3;
   l = l%j;
   l = l+j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
