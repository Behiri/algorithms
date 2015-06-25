#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int number = 0;
    cin >> number;
    int numList[number] = {0};
    for (int i = 0; i < number; i++)
    {
        cin >> numList[i];
    }
    // lets shuffle the list
    for (int i = number; i > 1; i--)
    {
        int ran = rand() % (i - i);
        int swap = numList[ran];
        numList[ran] = numList[i];
        numList[i] = swap;
        
    }




}
