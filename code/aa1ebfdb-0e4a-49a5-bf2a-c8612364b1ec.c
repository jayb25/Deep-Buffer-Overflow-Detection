#include <stdio.h>
int main() {
   int i=4;
   int j=322;
   int k;
   int l;
   k = 333;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-j*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
