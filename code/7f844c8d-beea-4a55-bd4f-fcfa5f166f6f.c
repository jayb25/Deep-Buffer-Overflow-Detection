#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   j = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   l = l%j;
   k = i-k*i;
   printf("vulnerability");
   printf("%d%d\n",i,l);
   return 0;
}
