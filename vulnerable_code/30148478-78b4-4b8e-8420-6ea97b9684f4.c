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
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[99];
    char c[43];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
     }
   else  
     {
        l = k;
     }
   printf("%d\n",l);
   return 0;
}
