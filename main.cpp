#include "std_lib_inc.h"


int main()
{
    double betrag;
    char waehrung;

    cout << "Gib den Betrag und die Währung ein (Y für Yen, K für Kronen, P für Pfund, D für Dollar): \n";
    cin >> betrag >> waehrung;

    if (waehrung == 'Y')
    {
        cout << betrag << " Yen umgerechnet in Euro: " << betrag * 0.0067 << " Euro\n";
    }
    else if (waehrung == 'K')
    {
        cout << betrag << " Schwedische Kronen umgerechnet in Euro: " << betrag * 0.09 << " Euro\n";
    }
    else if (waehrung == 'P')
    {
        cout << betrag << " Pfund umgerechnet in Euro: " << betrag * 1.17 << " Euro\n";
    }
    else if (waehrung == 'D')
    {
        cout << betrag << " Dollar umgerechnet in Euro: " << betrag * 0.93 << " Euro\n";
    }
    else
    {
        cout << "Fehler: Unbekannte Währung '" << waehrung << "'. Das Programm wird beendet.\n";
        return 0; // Beende das Programm mit Fehlerstatus
    }

    return 0;
}
