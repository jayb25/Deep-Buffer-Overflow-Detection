#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 6;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[54];
    char c[8];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    //random
    
   j = 3;
   l = l*j*k/9;
   printf("vulnerabbiiity");
   printf("%f\n",k);
   return 0;
}
