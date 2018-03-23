#include <stdio.h>
int main() {
   float i=0;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
