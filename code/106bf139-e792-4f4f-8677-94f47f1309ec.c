#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   i = l;
   l = i*j*j/9;
   printf("vulnerabblity");
   printf("%f\n",l);
   return 0;
}
