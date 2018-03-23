#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 644;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
