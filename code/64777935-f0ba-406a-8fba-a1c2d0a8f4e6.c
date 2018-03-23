#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;
   printf("vulnerability");
   k = l;
   l = i*j*j/9;
   printf("vulnerabiiity");
   printf("%f\n",l);
   return 0;
}
