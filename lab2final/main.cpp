#include <iostream>
#include "lista.h"
#include "teste.h"
using namespace std;
int main()
{
    teste_prim();
    teste_interval();
    teste_secventa_prim();
    teste_secventa_interval();
    int* v = NULL;
    while (true)
    {
        cout << "Dati optiune : " << endl;
        cout << "1. Citire lista " << endl;
        cout << "2. Afisare lista " << endl;
        cout << "3. Afisare cea mai lunga secventa de numere prime " << endl;
        cout << "4. Afisare cea mai lunga secventa de numere din intervalul [a,b] " << endl;
        cout << "-1. Iesire" << endl;
        int opt;
        cin >> opt;
        int n;
        if (opt == 1)
        {
            citire(n, v);
        }
        else if (opt == 2)
        {
            afisare(n, v);
            cout << endl;
        }
        else if (opt == 3)
        {
            //int p1=0, p2=0;
            int p1, p2;
            cout << "Cea mai lunga secventa de nr prime este : ";
            secventa_prim(n, v, p1, p2);

            if (p1 == -1)
                cout << "Nu exista numere prime";
            else
                for (int i = p1; i <= p2; i++)
                    cout << v[i] << " ";
            cout << endl;
            //cout << p1 << p2;
        }
        else if (opt == 4)
        {
            int a, b;
            cout << " Dati a si b : ";
            cin >> a >> b;
            int p1, p2;
            secventa_interval(n, v, a, b, p1, p2);
            if (p1 == -1)
                cout << "Nu exista numere prime";
            else
                for (int i = p1; i <= p2; i++)
                    cout << v[i] << " ";
            cout << endl;
        }

        else if (opt == -1)
            break;
        else cout << "optiune gresita !!!" << endl;

    }
    if(v != NULL)delete[]v;
    return 0;
}