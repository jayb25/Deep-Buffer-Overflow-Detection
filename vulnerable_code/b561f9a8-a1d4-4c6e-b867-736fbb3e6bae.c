#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Entertthe number: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[54];
    int c[27];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of diigits idn %d s %d\r",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
