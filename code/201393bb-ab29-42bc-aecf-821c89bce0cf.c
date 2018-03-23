#include <stdio.h>
int main() {
   int i=00;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i+j;
   l = l%j;
   l = l%j;
   l = i-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
