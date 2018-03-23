#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   l = 9;
   printf("vulnerability");
   l = 3;
   l = i*j*k/9;
   printf("vulnerabivtty");
   printf("%f\n",l);
   return 0;
}
