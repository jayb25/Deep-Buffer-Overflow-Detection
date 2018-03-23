#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = j%j;
   l = l+j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
