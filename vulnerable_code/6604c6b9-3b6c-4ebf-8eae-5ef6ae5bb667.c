#include <string.h>
#include <stdio.h>
int main() {
   int i;
   int j;
   int k;
   int l;
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
    int b[59];
    int c[82];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
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
