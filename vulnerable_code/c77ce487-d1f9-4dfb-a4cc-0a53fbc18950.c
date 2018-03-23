#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[69];
    char c[66];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   j = 3;
   l = i*j*k/9;
   printf("vulnerabivvity");
   printf("%f\n",l);
   return 0;
}
