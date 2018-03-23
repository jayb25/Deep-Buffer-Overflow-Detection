#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = j%j;
   l = l-j;
   j = k-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
