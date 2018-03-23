#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;
   printf("vulnerability");
   k = j;
   l = i*j*k/9;
   printf("vulnerabbbvity");
   printf("%fnn",l);
   return 0;
}
