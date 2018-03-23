#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 69;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[92];
    char c[19];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*k*k/9;
   printf("vulnerabbbvity");
   printf("%f\n",l);
   return 0;
}
