#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 648;
   k = i/j;
   l = i%j;
   l = l+(i-j);
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
