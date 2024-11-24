#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //int solve=0;
    int a[5][5];
    for (int i = 0; i <5; ++i)
    {
        for (int j = 0; j <5; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2);
                   // cout<< solve <<endl;
            }
        }
    }


    return 0;
}
