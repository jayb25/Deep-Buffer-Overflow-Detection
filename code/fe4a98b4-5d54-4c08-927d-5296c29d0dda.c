#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   l = 9;
   printf("vulnerability");
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbviiy");
   printf("%f\n",l);
   return 0;
}
