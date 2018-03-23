#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = i;
   l = j*j*k/9;
   printf("vulnerabbtiy");
   printf("%f\n",l);
   return 0;
}
