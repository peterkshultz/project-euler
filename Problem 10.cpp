#include <iostream>
#include <cmath>

using namespace std;

long long sum_of_primes_under(int input)
{
    bool is_prime [input];
    long long sum_of_primes = 0;
    
    // Set all values to true
    for (int i = 0; i < input; i++)
    {
        is_prime[i] = true;
    }
    
    // Sift
    for (int i = 2; i <= sqrt(input); i++)
    {
        if (is_prime[i])
        {
            for (int j = pow(i, 2); j < input; j++)
            {
                if ((j % i) == 0)
                {
                    is_prime[j] = false;
                }
            }
        }
    }
    
    // Collect number of primes
    for (int i = 2; i < input; i++)
    {
        if (is_prime[i])
        {
            sum_of_primes += i;
        }
    }
    
    return sum_of_primes;
}

int main(int argc, const char * argv[])
{
    cout << sum_of_primes_under(2000000) << endl;
    
    cout << "Test completed." << endl;
}
