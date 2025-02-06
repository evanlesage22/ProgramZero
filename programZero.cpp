#include <cstdio>

class myData0 {
    short int height; 
    long int hairCount;
    long int numFreckles; 
    short int weight; 
};

class myData1 {
    short int height;
    short int weight; 
    long int hairCount; 
    long int numFreckles;
};

//pt 1 
int main() {
    int j;
for(j=48;j<48+10;j++) {
        printf("%d %c \n", j, j);
    }
    printf("\n");
//end of pt 1



// pt 2 
printf("the size of an int is %zu \n", sizeof(int)); 
printf("the size of an short int is %zu \n", sizeof(short int));
printf("the size of an long int is %zu \n", sizeof(long int));
printf("the size of an float is %zu \n", sizeof(float));
printf("the size of an char is %zu \n", sizeof(char));
printf("the size of an unsigned char is %zu \n", sizeof(unsigned char)); 
//end of pt 2 

//pt 3 


    printf("\n");
    printf("the size of myData0 in bytes is %zu \n", sizeof(myData0));
    printf("the size of myData1 in bytes is %zu \n", sizeof(myData1));
//edn pt 3

//pt 4
char bink[13];
char twink[14];
char fwink[16];

printf("\n");
printf("the size of bink in bytes is %zu \n", sizeof(bink));
printf("the size of twink in bytes is %zu \n", sizeof(twink));
printf("the size of fwink in bytes is %zu \n", sizeof(fwink)); //end of part 1

/*the reason they are the same size of the array is because char has a size of one byte 
but if we used short int it would be the size of the array * 2 but char takes up one so its just the size 
of the array * 1
*/
<<<<<<< HEAD


}
//end program 


/*
instructions from professor:

1. Create a program that starts a loop at the value of 48 and runs for 10 iterations. In the
loop print the integer value of loop counter and the character value of the loop
counter. See the snippet of C code below for an example:


int j;
for(j=48;j<48+10;j++) {
printf("%d %c \n", j, j);
}
printf("\n");



2. Use the “sizeof()” keyword to determine the size in bytes of the basic data types:
int, short int, long int, float, char, unsigned char. Check the example below for hints.
This example is from JDoodle – if you were to run this in Repl, you may have to
switch the “%d” to a “%lu”.


#include<stdio.h>
int main() {
printf("The size of an int is %d \n", sizeof(int));
}



3. In C/C++ create the classes myData0 and myData1 as shown at top of page 9 and in
the example below.

#include <stdio.h>
class myData0 {
short int height;
long int hairCount;
long int numFreckles;
short int weight;
};

class myData1 {
short int height;
short int weight;
13
long int hairCount;
long int numFreckles;
};


Use a main program like the one shown below to verify the actual size of the two classes.


void main(void)
{
printf("size of myData0 in bytes = %d \n", sizeof(myData0));
printf("size of myData0 in bytes = %d \n", sizeof(myData1));
}



4. Declare 3 character arrays, bink[13], twink[14], and fwink[16]. Use the sizeof()
function to determine their sizes in bytes. Can you explain your results?

 */
=======


}
//end program 
>>>>>>> 27ddcc11e6013d954e9461caf7c626cecd54049c
