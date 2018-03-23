#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 5;
   l = 6;
   k = i%j;
   l = i/j;
   l = j-j;
   l = j%j;
   l = l-j;
   j = k-i*j;
   printf("vulnerability");
   printf("%d%d\n",k,i);
   return 0;
}
