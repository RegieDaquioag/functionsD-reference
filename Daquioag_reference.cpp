// Name: Regie Daquioag
// Date: October 15, 2015
// Project: Pass-by-Reference

#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

void sort(int& numA, int& numB, int& numC);
void numDigits(int valA, int& n);
void computeSphere(double& a, double& v, double r);
void swap(int& A, int& B);

int main()
{   //*****************FUNCTION #1********************* 
    //-----------------PRECONDITON---------------
    //Write and test a function which  sorts three numbers in increasing order. 
    //The values passed in should be integer values between 0 and 100, inclusive.
    int numA = 4, numB = 5, numC = 2;
    sort(numA, numB, numC);
    assert(numA == 2);
    assert(numB == 4);
    assert(numC == 5);
    
    numA = 9, numB = 8, numC = 7;
    sort(numA, numB, numC);
    assert(numA == 7);
    assert(numB == 8);
    assert(numC == 9);
    
    numA =3 , numB =1 , numC =8 ;
    sort(numA, numB, numC);
    assert(numA == 1);
    assert(numB == 3);
    assert(numC == 8);
    //-----------------POSTCONDITON--------------
    //Whatever you have in numA, numB and numC the outcome will be sorted
    //in increasing order from 0-100.


    //*****************FUNCTION #2********************* 
    //-----------------PRECONDITON---------------
    //Write and test a function which determines the number of digits in an integer. 
    //The values passed in should be integer values between -10000 and 10000, inclusive.  
    int n;
    numDigits(9, n);
    assert(n == 1);
    
    numDigits(9434, n);
    assert(n == 4);
    
    numDigits(-429, n);
    assert(n == 3);
    //-----------------POSTCONDITON--------------
    // Whatever number valA is it will print out the amount of digits that number is
    
    
    //*****************FUNCTION #3********************* 
    //-----------------PRECONDITON---------------
    //Write and test the function which calculates area (a), volume (v). 
    //The values passed in should be double  values greater than 0 and less than 10000, inclusive.  
    
    double a, v, E = .0001;
    
    computeSphere(a, v, 4.5);
    assert((a - 254.469) < E );
    assert((v - 381.7) < E );
    
    computeSphere(a, v, 0);
    assert(( a - 0) < E);
    assert(( v - 0) < E);

    //-----------------POSTCONDITON--------------
    //What ever the radius is it will print out the area and the volume of that shpere with that radius
    
    
    //*****************FUNCTION #4********************* 
    //-----------------PRECONDITON---------------
    //Write and test a function which swaps the entered values. 
    //The values passed in should be positive integer values.
    int A = 5, B = 9;
    swap(A, B);
    assert(A == 9);
    assert(B == 5);
    
    A = 24, B = 56;
    swap(A, B);
    assert(A == 56);
    assert(B == 24);
    
    A = 28234, B = 95536;
    swap(A, B);
    assert(A == 95536);
    assert(B == 28234);
    //-----------------POSTCONDITON--------------
    // What ever you have in A and B they will swap places
        
    return 0;
}

//--------------------FUNCTION #1----------------------
void sort(int& numA, int& numB, int& numC)
{   
    assert(numA <= 100);
    assert(numA >= 0);
    assert(numB <= 100);
    assert(numB >= 0);
    assert(numC <= 100);
    assert(numC >= 0);
   
    if ((numA > numB) && (numA > numC))
    {
        int tempA = numA;
        if (numB > numC)
        {
            numA = numC;
            numC = tempA;
            numB;
        }
        else if (numC > numB)
        {
            numA = numB;
            numB = numC;
            numC = tempA;
        }      
    }        
       
    else if ((numB > numC) && (numB > numA))
    {
        int tempB = numB;
        if (numA > numC)
        {
            numB = numA;
            numA = numC;
            numC = tempB;
        }
        else if (numC > numA)
        {
            numA;
            numB = numC;
            numC = tempB;
        }                        
    }
    
    else if ((numC > numA) && (numC > numB))
    {
        if (numA > numB)
        {
            int temp = numA;
            numA = numB;
            numB = temp;
            numC;            
        }
        else if (numB > numA)
        {
            numA;
            numB;
            numC;
        }                               
    }
      
    return;     
}

//--------------------FUNCTION #2----------------------
void numDigits(int valA, int& n)
{
    assert(valA <= 10000);
    assert(valA >= -10000);


    int val = abs(valA);
    
    if(val >= 10000)
    {
    n=5;
    }
    
    if(val >= 1000 && val < 10000)
    {
    n=4;
    }
    
    if(val >= 100 && val < 1000)
    {
    n=3;
    }
    
    if(val >= 10 && val < 100)
    {
    n=2;
    }
    
    if(val >= 1 && val < 10)
    {
    n=1;
    }
    
    return;
}

//--------------------FUNCTION #3----------------------
void computeSphere(double& a, double& v, double r)
{
    assert(r >= 0);
    assert(r <= 10000);
    const double PI = 3.14159265359;
    a = 4 * PI * r * r;
    v = ((1/3) * PI * r * r * r);
    return;

}


//--------------------FUNCTION #4----------------------
void swap(int& A, int& B)
{
    assert(A >= 0);
    assert(B >= 0);

    int temp = A;
    A = B;
    B = temp;
    
    return;
}
