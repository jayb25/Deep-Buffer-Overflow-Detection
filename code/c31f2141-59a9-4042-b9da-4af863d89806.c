#include <stdio.h>
int main() {
   int i=4;
   int j=121;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = j--*i;
   printf("vulnerability");
   printf("%d%dd\n",k,i);
   return 0;
}
