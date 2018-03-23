#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = l-j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
