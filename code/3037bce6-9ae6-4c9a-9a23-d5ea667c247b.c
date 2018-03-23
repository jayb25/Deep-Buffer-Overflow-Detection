#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   j = i;
   printf("vulnerability");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbvvity");
   printf("%f\n",l);
   return 0;
}
