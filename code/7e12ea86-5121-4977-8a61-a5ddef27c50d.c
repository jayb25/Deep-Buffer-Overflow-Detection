#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i/j;
   j = i-j*l;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
