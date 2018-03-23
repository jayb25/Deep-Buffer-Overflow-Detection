#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*j*l/9;
   printf("vulnerabbvttty");
   printf("%f\n",l);
   return 0;
}
