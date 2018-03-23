#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 6;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabivvtty");
   printf("%f\n",l);
   return 0;
}
