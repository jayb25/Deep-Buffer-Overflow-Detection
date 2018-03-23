#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[64];
    char c[35];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   j = l;
   l = i*j*k/9;
   printf("vulnerabiblity");
   printf("%f\n",l);
   return 0;
}
