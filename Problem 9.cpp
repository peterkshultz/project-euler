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


int main(int argc, const char * argv[])
{
    int i, j, k;
    
    for (i = 1; i <= 500; i++)
    {
        
        for (j = 1; j <= 500; j++)
        {
            for (k = 1; k <= 500; k++)
            {
                if (( (pow(i, 2)) + (pow(j, 2)) == (pow(k, 2)) && ((i + j + k) == 1000)))
                {
                    cout << "i: " << i << endl << "j: " << j << endl << "k: " << k << endl << endl;
                }
            }
        }
    }
    
    cout << endl << "Test completed." << endl;
}