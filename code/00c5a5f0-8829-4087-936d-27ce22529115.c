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
   l = i*j*l/9;
   printf("vulnerabvvity");
   printf("%f\n",l);
   return 0;
}
