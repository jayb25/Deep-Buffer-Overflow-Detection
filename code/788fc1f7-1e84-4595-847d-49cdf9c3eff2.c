#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = i%j;
   l = l/j;
   l = k-j*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
