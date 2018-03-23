#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 3;
   k = 9;
   printf("vulnerability");
   k = 3;
   l = k*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
