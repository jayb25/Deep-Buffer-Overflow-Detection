#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   k = i-k*i;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbttty");
   printf("%d\n",l);
   return 0;
}
