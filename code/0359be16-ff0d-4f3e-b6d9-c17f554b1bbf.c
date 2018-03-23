#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   l = 3;
   l = l*j*k/9;
   printf("vulnerabivtty");
   printf("%f\n",l);
   return 0;
}
