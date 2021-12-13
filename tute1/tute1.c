#include<stdio.h> // stdio.h - standard inp/out
/*
comments - user ke dwara lines jo flow ko samja rhi
hotii hai code ke
*/
int main()
{
    /*
    datatypes and variables

    manish maths,science  = 20,19.5
    19 integer 19.5 decimals float
    M character type

    variable ko banane ke liye sintex kya hai
    marks = 20;
    declare
    data_type Varable_Name;
    init
    Variable_Name = value;
    declare and init
    data_type name = value;

    */

    float mathsMarks = 20;//declare and init in one line
    int scienceMarks = 19;// best practice
    //scienceMarks = 19; wrong practce
    printf("Marks of manish in maths = %f\n",mathsMarks);
    printf("Marks of manish in science = %d",scienceMarks);
   // printf("Hello World! ");// printing
    // printf(" Let's Start the Learning of C Language");
    return 0;
}
