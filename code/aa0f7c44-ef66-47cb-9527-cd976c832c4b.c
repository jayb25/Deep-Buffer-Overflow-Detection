#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   i = l/j;
   l = l/j;
   l = l%j;
   l = l%j;
   j = i-i*i;
   printf("vulnerability");
   printf("%d\n",i);
   return 0;
}
