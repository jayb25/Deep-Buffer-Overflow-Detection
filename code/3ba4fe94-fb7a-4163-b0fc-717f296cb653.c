#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = l;
   j = 9;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",i);
   return 0;
}
