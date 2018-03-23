#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 6;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
