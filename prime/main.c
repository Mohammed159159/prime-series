#include<stdio.h>
#include<stdbool.h>

long long prime(long long pr);
int main() {

    long long findprime;
    printf(" Enter the number: ");

    scanf("%lld", &findprime);
    prime(findprime);
    printf(" \n");
}

long long prime(long long pr) {
    int factors;
    for (factors = 2; factors < pr; factors++) {
        if (pr % factors == 0)
            break;
    }
    if (factors == pr) {
        printf("\n\n The number %lld is Prime", pr);
    }
    else {
        printf("\n\n The number %lld is not Prime", pr);
    }



}

//another possible version

 /*  bool prime(int pr){

   int factors;
   for(factors = 2; factors < pr; factors++){
       if(pr % factors == 0)
       break;
   }
   if (factors == pr)
   return true;
   else
   return false;
}*/



/* bad function version
    long long prime(long long pr){
    int factors =1;
    int count =0;

    for(factors; factors<=pr; factors++){
        if(pr%factors==0)
        count++;
    }
    if (count==2){
    printf("\n\n The number %lld is Prime",pr);
    }
    else {printf("\n\n The number %lld is not Prime",pr);
    }*/

