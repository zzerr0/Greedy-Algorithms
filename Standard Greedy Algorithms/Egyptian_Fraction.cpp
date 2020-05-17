//EGYPTIAN FRACTION
/*
   A fraction is unit fraction if numerator is 
   1 and denominator is a positive integer, for 
   example 1/3 is a unit fraction. Such a 
   representation is called Egyptian 
   
   
  3/4=(1/2)+(1/4)
  
  find for (this method not for unit fraction)
  
  8/9 = (1/2)+? 
  (8/9)-(1/2)=?
  (8/9)-(1/2)=(7/8)
  
  (1/2)+(7/18)=(18+14)/36=(32/36)=(8/9)
   
*/  
  
/* 
  FLOOR AND CEILING FUNCTION 

Which leads to our definition:

Floor Function: the greatest integer that is less 
than or equal to x
example: 2.31 Floor is 2

Likewise for Ceiling:

Ceiling Function: the least integer that is greater 
than or equal to x
example : 2.31 ceiling is 3
*/
  
/*
 
 3.1 Why use Egyptian fractions today?
Suppose you and 7 other friends go for a pizza. 
You all like the same kind but you don't want a 
whole one each. The 8 of you decide to buy 5 
identical pizzas. How do you divide them up between 
you? Decimals don't help and that you each get 5/8 
only tells you what the problem is (split 5 things 
into 8 parts) not the solution! It is easier with 
beer or sacks of grain. This was an everyday problem 
in ancient Egypt when barley loaves may have to be 
divided amongst workers.
  
*/
#include<iostream>
using namespace std;
void printEgyptian(int nr, int dr) 
{ 
    // If either numerator or denominator is 0 
    if (dr == 0 || nr == 0) 
        return; 
  
    // If numerator divides denominator, then simple division 
    // makes the fraction in 1/n form 
    if (dr%nr == 0) 
    { 
        cout << "1/" << dr/nr; 
        return; 
    } 
  
    // If denominator divides numerator, then the given number 
    // is not fraction 
    if (nr%dr == 0) 
    { 
        cout << nr/dr; 
        return; 
    } 
  
    // If numerator is more than denominator 
    if (nr > dr) 
    { 
        cout << nr/dr << " + "; 
        printEgyptian(nr%dr, dr); 
        return; 
    } 
  
    // We reach here dr > nr and dr%nr is non-zero 
    // Find ceiling of dr/nr and print it as first 
    // fraction 
    int n = dr/nr + 1; 
    cout << "1/" << n << " + "; 
  
    // Recur for remaining part 
    printEgyptian(nr*n-dr, dr*n); 
 } 
int main()  
{
  int nr=6, dr=14;
  cout<<"\nEgyptian Fraction of 6/14 is ";
  printEgyptian(nr, dr);
  return 0;
}
    
