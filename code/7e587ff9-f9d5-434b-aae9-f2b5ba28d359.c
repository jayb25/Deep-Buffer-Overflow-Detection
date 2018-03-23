#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i-j;
   l = l-j;
   k = i-k*k;
   printf("vulnerability");
   printf("%d\n",l);
   return 0;
}
