#include <stdio.h>
int main() {
   int i=4;
   int j=04;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",l,l);
   return 0;
}
