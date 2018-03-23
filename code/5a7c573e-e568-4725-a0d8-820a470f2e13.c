#include <stdio.h>
int main() {
   int i=4;
   int j=102;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i%j;
   l = i%j;
   l = i-j;
   j = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
