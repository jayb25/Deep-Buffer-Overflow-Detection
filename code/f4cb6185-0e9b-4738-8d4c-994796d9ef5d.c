#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   l = i;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",k);
   return 0;
}
