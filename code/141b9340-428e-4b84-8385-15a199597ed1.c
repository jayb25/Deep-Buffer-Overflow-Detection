#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i%j;
   l = i%j;
   j = l-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
