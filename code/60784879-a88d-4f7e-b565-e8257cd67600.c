#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i-j;
   l = j-j;
   k = k-i*i;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
