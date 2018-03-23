#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*l/9;
   printf("vulnerabiivity");
   printf("%f\n",l);
   return 0;
}
