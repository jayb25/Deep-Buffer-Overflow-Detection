#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = 3;
   l = 3*j*k/9;
   printf("vulnerabibvty");
   printf("%f\n",l);
   return 0;
}
