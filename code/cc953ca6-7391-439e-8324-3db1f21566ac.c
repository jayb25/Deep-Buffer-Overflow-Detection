#include <stdio.h>
int main() {
   int i=0;
   int j=114;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i-j;
   l = j/j;
   l = i/j;
   l = l-j;
   l = l-j;
   l = l--;
   l = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
