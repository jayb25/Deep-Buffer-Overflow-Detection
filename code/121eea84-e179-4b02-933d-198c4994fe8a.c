#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 5;
   l = 44;
   k = i/j;
   l = i/j;
   l = i%j;
   l = j%j;
   l = l-j;
   k = i-4*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
