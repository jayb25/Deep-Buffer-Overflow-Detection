#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 13;
   l = 66;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = l--*k;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
