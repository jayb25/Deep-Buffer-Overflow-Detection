#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 6;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[50];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   j = 3;
   l = l*j*k/9;
   printf("vulnerabbbiity");
   printf("%f\n",l);
   return 0;
}
