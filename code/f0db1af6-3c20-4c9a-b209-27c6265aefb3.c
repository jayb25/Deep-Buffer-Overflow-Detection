#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   j = 51;
   l = 64;
   k = i/j;
   l = j/j;
   l = j%j;
   l = l-j;
   k = k-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
