#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 633;
   l = 9;
   k = i/j;
   l = i/j;
   l = l%j;
   l = k-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
