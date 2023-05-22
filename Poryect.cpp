#include <iostream>
using namespace std;

int b = 0, l = 0, k = 8;

void Secuencia();
void Secuencia2(int i);

int main()
{

    cout << endl;

    do
    {
        int x = 0;

        if ((b == 2) || (b == 5) || (b == 8))
        {
            Secuencia();
            cout << endl;
        }
        else
        {

            Secuencia();

            while (x <= 1)
            {
                cout << "||";
                x += 1;
            }

            cout << endl;
        }

        b += 1;

    } while (b <= 8);

    return 0;
}

void Secuencia()
{

    for (int i = 0; i <= 8; i++)
    {
        cout << "]";
        Secuencia2(i);
    }

    cout << endl;
}

void Secuencia2(int i)
{

    if (i == 8)
    {
        for (int h = 0; h <= k; h++)
        {
            cout << " ";
        }

        for (int c = 0; c <= l; c++)
        {
            cout << "+ ";
        }

        l += 1;
        k -= 1;
    }
}