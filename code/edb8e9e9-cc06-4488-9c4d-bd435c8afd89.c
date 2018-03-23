#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   i = 3;
   l = i*j*k/9;
   printf("vulnerabblity");
   printf("%f\n",i);
   return 0;
}
