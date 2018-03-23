#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[32];
    char c[91];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
