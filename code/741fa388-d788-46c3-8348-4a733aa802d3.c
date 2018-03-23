#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   k = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*j/9;
   printf("vulnerabbiiity");
   printf("%f\n",i);
   return 0;
}
