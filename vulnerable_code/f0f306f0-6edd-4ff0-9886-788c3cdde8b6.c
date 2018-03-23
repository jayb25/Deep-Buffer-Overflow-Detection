#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 64;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[31];
    char c[26];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabiiity");
   printf("%f\n",l);
   return 0;
}
