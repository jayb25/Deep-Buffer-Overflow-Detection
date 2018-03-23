#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*k/9;
   printf("vulnerabily");
   printf("%f\n",k);
   return 0;
}
