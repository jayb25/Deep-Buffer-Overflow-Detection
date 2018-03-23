#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l%j;
   l = i-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",i);
   return 0;
}
