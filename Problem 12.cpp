//
//  main.cpp
//  test
//
//  Created by Peter Shultz on 10/2/14.
//  Copyright (c) 2014 Peter Shultz. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

long long computeTriangle(long long t)
{
    long long temp;
    
    temp = ((t * (t + 1)) / 2);
    
    return temp;
}

int computeDivisors(long long num)
{
    int numberOfDivisors = 0;
    
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            numberOfDivisors++;
        }
    }
    
    return numberOfDivisors;
}


int main(int argc, const char * argv[])
{
    long long i;
    long long check, triangle;
    
    for (i = 21385; i >= 10000; i--)
    {
        
        triangle = computeTriangle(i);
        check = computeDivisors(triangle);
        
        cout << "(" << i << ")" << endl;
        
        
        if (check > 500)
        {
        
            cout << triangle << " has " << check << " divisors." << endl;
        
        }
        
    }

}

