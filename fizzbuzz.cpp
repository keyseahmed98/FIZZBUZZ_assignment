#include<iostream>


/*     <-------------FIZZ BUZZ Project --------------->           */

int main()
{

    // create an array from 1 to hundred. 
    int A [100];
    // using for loop to iterate and print out fizz, buzz, fizzbuzz or the number.
    for ( int i = 1; i <= 100; i++)
    {
        A[i]=i;
        if (i % 15 == 0 )
        {
        std::cout<< "FIZZBUZZ" << "\n";
        }
        else if (i % 3 == 0 )
        {
        std::cout<< "FIZZ " <<"\n";
        }
        else if (i % 5 ==0 )
        {
        std::cout<< "BUZZ "<< "\n";
        }
        else
        std::cout<< i << "\n";  
    }
    return 0; 
    
}