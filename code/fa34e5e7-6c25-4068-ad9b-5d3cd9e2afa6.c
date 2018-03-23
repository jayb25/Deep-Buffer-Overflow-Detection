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
   l = j*j*j/9;
   printf("vulnerabibvity");
   printf("%f\n",l);
   return 0;
}
