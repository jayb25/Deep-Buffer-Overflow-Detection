#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = l/j;
   l = j/j;
   l = l/j;
   l = l-j;
   l = k--*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
