#include <stdio.h>
int main() {
   float i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
