#include <string.h>
#include <stdio.h>
int main() {
   int i;
   int j;
   int k;
   int l;
   int m;
   float num1=8.9;
   i = (int)num1;
   double num2=10.555;
   j = (int)num2;
   short num3=3;
   k = (int)num3;
   num1 = (float)i;
   if (i>j&&i>k)  
     {
        l = i;
     }
   else if (j>i&&j>k)  
     {
        l = j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[93];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
     }
   else  
     {
        l = k;
     }
   printf("%d\n",l);
   return 0;
}
