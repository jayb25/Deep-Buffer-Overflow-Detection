#include <stdio.h>
int main() {
   int i=4;
   int j=144;
   int k;
   int l;
   j = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j-j;
   l = i/j;
   l = l-j;
   l = l%j;
   l = i%j;
   k = l-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
