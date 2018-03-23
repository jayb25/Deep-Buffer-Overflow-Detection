#include <stdio.h>
int main() {
   int i=0;
   int j=34;
   int k;
   int l;
   j = 53;
   l = 61;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = l+j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
