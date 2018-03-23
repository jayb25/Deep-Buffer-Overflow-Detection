#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[16];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   j = 3;
   l = i*j*k/9;
   printf("vulneraabtvty");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabiiity");
   printf("%f\n",i);
   return 0;
}
