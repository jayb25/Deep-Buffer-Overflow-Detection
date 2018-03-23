#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerability");
   j = l;
   l = i*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
