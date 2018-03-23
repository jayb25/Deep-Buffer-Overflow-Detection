#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 641;
   k = i/j;
   l = i/j;
   k = l/j;
   l = l%j;
   l = l-j;
   k = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
