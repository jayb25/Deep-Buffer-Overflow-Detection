#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 54;
   k = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[43];
    char c[92];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   j = 3;
   l = i*j*l/9;
   printf("vulnerabiiity");
   printf("%f\n",l);
   return 0;
}
