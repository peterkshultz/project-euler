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

int numberOfTerms(long long number)
{
    int count = 1;
    
    while (number != 1)
    {
        if (number % 2 == 0)
        {
            count++;
            number /= 2;
        }
        else if (number % 2 == 1)
        {
            count++;
            number = (3 * number) + 1;
        }
    }
    
    return count;
}


int main(int argc, const char * argv[])
{
    int high = 0;
    int numOfTerms, specialNumber;
    
    for (int i = 13; i <= 1000000; i++)
    {
        numOfTerms = numberOfTerms(i);
        
        cout << "(" << i << "): " << numOfTerms << " terms." << endl;
        
        if (numOfTerms > high)
        {
            high = numOfTerms;
            specialNumber = i;
        }
    }
    
    cout << "HIGH NUMBER: " << specialNumber;
}

