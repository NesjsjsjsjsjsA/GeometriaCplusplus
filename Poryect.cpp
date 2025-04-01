#include <iostream>
using namespace std;

int Ritmodecrecimiento = 0, valorextra1 = 0, valorextra2 = 9; // Definicion de variables globales

// Ritmodecrecimiento es la cantidad de filas que se construyen
// Valor extra 1 y 2 son los limites que el programa ira construyendo
// Partedeenmedio son figuras que se generan para separar las dos grandes como a'a

void Secuencia();
void Secuencia2(int sumari);
void Secuencia3();

int main()
{

    cout << endl; // Salto inicial

    do
    {
        int Partedeenmedio = 0; // variables que afecten al main

        if ((Ritmodecrecimiento == 2) || (Ritmodecrecimiento == 5) || (Ritmodecrecimiento == 8)) // Decisiones
        {
            Secuencia(); // Evalunado "secuencia"

            cout << endl;
        }
        else
        {

            Secuencia(); // Evalunado "secuencia"

            while (Partedeenmedio <= 1)
            {
                cout << "||";

                Partedeenmedio += 1;
            }

            for (int g = 0; g <= 12; g++)
            {
                cout<<" ";
            }
        
            for (int r = 0; r <= 4; r++)
            {
                cout<<"-";
            }
            
            cout << endl;
        }

        Ritmodecrecimiento += 1;

    } while (Ritmodecrecimiento <= 8);

    return 0;
}

// Funciones del programa- ------------------------------ Funciones del programa

void Secuencia() // Esta crea las figuras largas
{

    for (int sumari = 0; sumari <= 8; sumari++)
    {
        cout << "]";
        Secuencia2(sumari);
    }

    cout << endl;
}

void Secuencia2(int sumari) // Evalua cuando se creara las partes del triangulo
{

    if (sumari == 8)
    {
        Secuencia3();

        for (int c = 0; c <= valorextra1; c++)
        {
            cout << "+ ";
        }

        Secuencia3();

        valorextra1 += 1;
        valorextra2 -= 1;
    }
}

void Secuencia3() // Creara las separaciones entre las figuras de secuencia 1 y 2
{

    for (int h = 0; h <= valorextra2; h++)
    {
        cout << " ";
    }
}