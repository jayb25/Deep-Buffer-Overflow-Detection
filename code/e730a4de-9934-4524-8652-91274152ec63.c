#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = k/j;
   l = l-j;
   l = l%j;
   l = k-j*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
