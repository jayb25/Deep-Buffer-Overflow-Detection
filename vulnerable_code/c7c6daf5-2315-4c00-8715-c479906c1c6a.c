#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Etter thi number: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[28];
    char c[44];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((char *)c + ( a - 1 )) = *((char *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of dhgits i%d is %d\n",num,result);
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
