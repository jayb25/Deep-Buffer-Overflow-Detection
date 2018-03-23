#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   k = i-i*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
