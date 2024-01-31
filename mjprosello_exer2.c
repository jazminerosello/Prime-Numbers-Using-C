/*
ROSELLO, MA. JAZMINE P.
CMSC 21 - T3L
Exercise 2
*/

/*
A prime number are those numbers that factors are just 1 and itself, therefore in this case, they should not be divisible by those smaller number than themselves except 1

The logic in this program/codes is whenever the number value meets the 1st basecase first rathen than the 2nd basecase it means, it is prime. However, as the recursion 
processes and it first meet the 2nd basecase, it means it could be divisible by its smaller numbers and so it means it is not prime.

For the RECURSION FUNCTION, we will have 2 basecase that will stop the recursion. First is determining if the value of integer named as 'number' variable is equal to the 
i, and if it is so, it will return 0 or in short if number first meet this basecase, it is considered as prime. The reason is that the logic behind it is that it could
not be divided by its smaller number. However, we still need to locate one basecase that will dictate that this number is not prime and it is knowing if 
number divided by i's remainder is 0. 

It is like steps, whenever the number with its corresponding i do not meet the 1st basecase (1st step), and it meets the 2nd basecase(step 2), 
it means it is not prime, in vice versa, it is prime. BUT whenever the number did not meet the two basecase in regards of its i, it will increment the 
value of i and repeat the recursion function process.

--> Example of the recursion function to determine if the number is prime or not <--

Let's say we input 5 as the n, so n=5

since we have indicated a for-loop, that initialized i as 2 and increment the i until it is equal to 5
every i, we will call the recursion function passing the actual parameter of (2,i). The 2 will serve as the value of i in the recursion function
and i in the for loop will serve as the value of number in recursion. We have passed i from the for loop in the recursion as the number value because
we need to determine the prime numbers from 2 up to 5. As we passed the actual parameter to the recursion, it will now check if the number in recursion is prime
or not. If it is prime, it will return the value of 0 and if not, value of 1. All numbers that meets the 1st basecase first are prime and will printed out in the program

Recursion function serves as checking if numbers from 1 up to the n are prime numbers, after checking and returning, it will now go back to the main function
and print out those prime numbers
*/


#include <stdio.h>

// ---> RECURSION FUNCTION <---
int determineprimenum(int i, int number){
    if(number==i){ //1st basecase na kapag eto 'yung unang na-meet ng isang number using the i value, it means it could not be divisible by smaller numbers and that it is prime
        return 0; 
    }else if(number%i==0){
        return 1; //2nd basecase na kapag eto naman ang naunang ma-meet ni number imbes na 'yung 1st basecase, it means kayang madivide ni number using its smaller numbers so it is not prime
    }else{
        return determineprimenum(i+1, number); //recursive step that dictates to increment the value of i that number will use to determine if it is prime or not
    }
}


// ---> MAIN FUNTION <---
int main(){

    int n, i; //Declaring intger variables

    printf("\nEnter a positive integer: "); //Asking users for a positive integers
    scanf("%d", &n); //Storing the value of user's input into the integer variable named as n

    if (n < 2){
        printf("\n ===> No prime number values present.");
    }else{
        printf("\nThe prime numbers from 1 to %d are: ", n);

        // FOR LOOP TO ACCESS NUMBERS FROM 2 UP TO N
        for(i=2;i<=n;i++){
            //Function call and the actual parameter that will be passed on the function are: 2 (as the value of i in recursion) & value of i in for loop(as the number in recursion)
            if (determineprimenum(2,i)==0){ // whenever the function returns 0, the value of number in recursion that is also the value of i in for loop here will be included in 
            //printing out prime numbers
                printf("%d ", i); 
            }
        }
    }
    printf("\n\n"); //to remove '%' at the end of prime numbers when printing out
}

