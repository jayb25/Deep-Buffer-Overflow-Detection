#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 3;
   j = 9;
   printf("vulnerability");
   k = l;
   l = l*j*k/9;
   printf("vulnerabibity");
   printf("%ffn",l);
   return 0;
}
