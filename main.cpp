#include <iostream>
using namespace std;
int main()
{
    int ile;
    cout << "Ile chcesz wykonac obliczen? ";
    cin >> ile;
    for (int i = 1; i <= ile; i++)
    {
        int instrukcja;
        double ab;
        double r1;
        double r2;
        cout << "Mam AB, mam r1, mam r2 nie mam nazwy - 1" << endl;
        cout << "Mam AB, mam r1, nie mam r2  mam nazwe - 2 NIE DZIALA" << endl;
        cin >> instrukcja;
        if (instrukcja == 1)
        {
            cout << "Podaj AB:";
            cin >> ab;
            cout << "Podaj R1: ";
            cin >> r1;
            cout << "Podaj R2; ";
            cin >> r2;
            if (ab == 0)
            {
                cout << "Okregi wspolsrodkowe" << endl;
            }
            else if (r1 - r2 < ab && ab < r1 + r2)
            {
                cout << r1 << " - " << r2 << " < " << ab << " < " << r1 << " + " << r2 << " Okregi przecinaja sie." << endl;
            }
            else if (ab > r1 + r2)
            {
                cout << ab << " > " << r1 << " + " << r2 << " Okregi rozlacznie zewnetrzne." << endl;
            }
            else if (ab == r1 + r2)
            {
                cout << ab << " = " << r1 << "+" << r2 << " Okregi styczne zewnetrzne." << endl;
            }
            else if (ab == r1 - r2)
            {
                cout << ab << " = " << r1 << "-" << r2 << " Okregi styczne wewnetrznie." << endl;
            }
            else if (ab < r1 - r2)
            {
                cout << ab << " < " << r1 << "-" << r2 << " Okregi rozlaczne wewnetrznie." << endl;
            }
        }

        cin.ignore();
        cin.get();
    }

}
   
