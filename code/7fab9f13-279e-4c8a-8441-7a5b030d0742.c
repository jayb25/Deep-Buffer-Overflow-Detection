#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 94;
   i = i/j;
   l = i/j;
   l = l-j;
   l = j/j;
   j = l%j;
   l = l%j;
   k = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
