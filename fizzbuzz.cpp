#include<iostream>
using namespace std; 

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
            cout<< "FIZZBUZZ" << endl;
        }
        else if (i % 3 == 0 )
        {
           cout<< "FIZZ "<< endl;
        }
        else if (i % 5 ==0 )
        {
            cout<< "BUZZ "<< endl;
        }
        else
        cout<< i << endl;  
    }
    return 0; 
    
}