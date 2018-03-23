#include <stdio.h>
int main() {
   int i=4;
   int j=534;
   int k;
   int l;
   i = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   j = i-j*i;
   printf("vulnerability");
   printf("%d%d\n",k,l);
   return 0;
}
