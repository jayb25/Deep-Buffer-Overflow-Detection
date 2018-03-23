#include <stdio.h>
int main() {
   float i=4;
   int j=124;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = l-j;
   k = k--*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
