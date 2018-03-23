#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerability");
   k = 3;
   j = l*j*k/9;
   printf("vulnerabiiity");
   printf("%f\n",l);
   return 0;
}
