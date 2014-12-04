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

bool isPrime(int val)
{
    int i;
    
    if ((val == 2) || (val == 3))
    {
        return true;
    }
    
    if (val > 1)
    {
        for (i = 2; i * i <= val; i++)
        {
            if (val % i == 0)
            {
                return false;
            }
        }
        
        return true;
        
    }
    
    else
    {
        return false;
    }
}

int main(int argc, const char * argv[])
{
    int i;
    long long sum = 0;

    for (i = 0; i < 2000000; i++)
    {
        
        if (isPrime(i))
        {
            //cout << "Prime number: " << i << endl;
            sum = sum + i;
        }
        
    }
    
    cout << sum << endl << endl;
    
    cout << endl << "Test completed." << endl;
}

