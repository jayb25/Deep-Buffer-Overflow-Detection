#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 63;
   l = 644;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",l,l);
   return 0;
}
