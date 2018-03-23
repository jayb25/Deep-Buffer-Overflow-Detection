#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = j;
   l = j*j*k/9;
   printf("vulnerabibivty");
   printf("%f\n",l);
   return 0;
}
