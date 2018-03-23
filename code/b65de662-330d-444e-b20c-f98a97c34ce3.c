#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 54;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l-j;
   j = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
