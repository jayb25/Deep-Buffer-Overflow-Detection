#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = k;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = j*j*k/9;
   printf("vulnerabbiiity");
   printf("%f\n",k);
   return 0;
}
