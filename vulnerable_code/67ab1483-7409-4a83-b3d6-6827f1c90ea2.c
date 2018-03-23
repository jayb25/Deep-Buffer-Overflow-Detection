#include <string.h>
#include <stdio.h>
int main() {
   int i;
   int j;
   int k;
   int l;
   float num1=8.9;
   i = (int)num1;
   double num2=11.555;
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
    char b[44];
    char c[12];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
     }
   else  
     {
        l = k;
     }
   printf("%d\n",l);
   return 0;
}
