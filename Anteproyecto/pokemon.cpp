/* Stats de los pokemons
 */

#include <iostream>
using namespace std;

int main()
{
    int j1poke1[5] = {}, j1poke2[5] = {}, j1poke3[5] = {};
    int j2poke1[5] = {}, j2poke2[5] = {}, j2poke3[5] = {};
    int poke = 0;
    int clase;
    // Determinante de pokemons. {n	hp	at	defense  speed}

    // Fuego.
    int Charmander[5] = {1, 39, 52, 43, 65};
    int Arcanine[5] = {2, 90, 110, 80, 95};
    int Torchic[5] = {3, 45, 60, 40, 45};
    // Planta
    int Bulbasaur[5] = {4, 45, 49, 49, 45};
    int Chikorita[5] = {5, 45, 49, 65, 45};
    int Floragato[5] = {6, 61, 80, 63, 83};
    // Agua
    int Squirtle[5] = {44, 48, 65, 50, 43};
    int Wooper[5] = {55, 45, 45, 25, 15};
    int Finizen[5] = {70, 45, 40, 45, 75};
    // Secret
    int Jigglypuff[5] = {10, 115, 45, 20, 20};
    int Mewtwo[5] = {11, 106, 110, 90, 130};
    int Chansey[5] = {12, 250, 5, 5, 50};

    for (int i = 1; i <= 3; i++)
    {
        // Primera, segunda y terccera desiccion depojemosn
        cout << "Elige la clase para el pokemon " << i << endl;
        cout << "Fuego: 1\n";
        cout << "Planta: 2\n";
        cout << "Agua: 3\n";
        cout << "Clase: ";
        cin >> clase;

        // clases
        switch (clase)
        {
        case 1:
            cout << "Elige un pokemon.\n";
            cout << "Charmander: 1\n";
            cout << "Arcanine: 2\n";
            cout << "Torchic: 3\n";
            cin >> poke;

            switch (poke)
            {
            case 1:
                j1poke1[5] = Charmander[5];
                cout << "Has escogido a Charmander!\n";
                break;
            case 2:
                j1poke2[5] = Arcanine[5];
                cout << "Has escogido a Arcanine!\n";
                break;
            case 3:
                j1poke3[5] = Torchic[5];
                cout << "Has escogido a Torchic!\n";
                break;
            default:
                cout << "No escogiste a tiempo!\n";
                break;
            }
            break;
        case 2:
            cout << "Elige un pokemon.\n";
            cout << "Bulbasaur: 1\n";
            cout << "Chikorita: 2\n";
            cout << "Floragato: 3\n";
            cin >> poke;

            switch (poke)
            {
            case 1:
                j1poke1[5] = Bulbasaur[5];
                cout << "Has escogido a Bulbasaur!\n";
                break;
            case 2:
                j1poke2[5] = Chikorita[5];
                cout << "Has escogido a Chikorita!\n";
                break;
            case 3:
                j1poke3[5] = Floragato[5];
                cout << "Has escogido a Floragato!\n";
                break;
            default:
                cout << "No elegiste a tiempo!\n";
                break;
            }
            break;
        case 3:
            cout << "Elige un pokemon.\n";
            cout << "Squirtle: 1\n";
            cout << "Wooper: 2\n";
            cout << "Finizen: 3\n";
            cin >> poke;

            switch (poke)
            {
            case 1:
                j1poke1[5] = Squirtle[5];
                cout << "Has escogido a Squirtle!\n";
                break;
            case 2:
                j1poke2[5] = Wooper[5];
                cout << "Has escogido a Wooper!\n";
                break;
            case 3:
                j1poke3[5] = Finizen[5];
                cout << "Has escogido a Finizen!\n";
                break;
            default:
                cout << "No has escogido a tiempo!\n";
                break;
            }
            break;
        }
    }

    return 0;
}