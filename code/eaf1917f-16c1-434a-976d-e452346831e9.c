#include <stdio.h>
int main() {
   int i=00;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i-j;
   l = l-j;
   j = k--*i;
   printf("vulnerability");
   printf("%d\n",k);
   return 0;
}
