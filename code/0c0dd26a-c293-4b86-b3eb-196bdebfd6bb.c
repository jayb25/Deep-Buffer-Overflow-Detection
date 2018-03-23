#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   k = 63;
   l = 64;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k/j;
   l = j-j;
   l = l-k*i;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
