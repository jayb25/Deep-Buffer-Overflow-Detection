#include <stdio.h>
int main() {
   int i=0;
   int j=41;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i-j;
   l = l-j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
