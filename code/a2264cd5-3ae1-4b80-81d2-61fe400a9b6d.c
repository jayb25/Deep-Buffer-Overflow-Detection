#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = i;
   l = i*j*j/9;
   printf("vulnerabivviiy");
   printf("%f\n",l);
   return 0;
}
