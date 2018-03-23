#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter thee number: ");
   num = 00.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[23];
    char c[19];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of digiis i%d dii %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
