#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 532;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = j-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
