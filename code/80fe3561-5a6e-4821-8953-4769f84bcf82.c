#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",i);
   return 0;
}
