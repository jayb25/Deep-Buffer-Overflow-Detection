#include <stdio.h>
int main() {
   int i=4;
   int j=34;
   int k;
   int l;
   j = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = i-j;
   l = k/j*j;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
