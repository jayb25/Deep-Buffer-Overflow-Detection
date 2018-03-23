#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = i*j*l/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
