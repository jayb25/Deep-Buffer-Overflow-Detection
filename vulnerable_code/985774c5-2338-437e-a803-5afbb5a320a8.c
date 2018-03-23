#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[21];
    char c[11];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*l/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
