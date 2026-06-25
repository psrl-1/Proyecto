#include <iostream>
using namespace std;


int main()
{
    while (juego == true) //Mientras el juego se este ejecutando
    {
        if (vidaj1[actualj1] <= 0) // Verifica la vida del pokemon actual
        {
            cout << "El pokemon #" << poke1[actualj1] << "ha muerto. \n";
        }
        // verifica si todos los demas pokemons del j1 estan vivos
        if  (vidaj1[1] <= 0 && vidaj1[2] <= 0 && vidaj1[3] <= 0 && vidaj1[4] <= 0 &&vidaj1[5] <= 0 &&vidaj1[6] <= 0 ) 
        {
            ganador == 2; // Marca al jugador 2 como ganador
            juego == false; // Y termina el juego
        }
        else 
        {
            cout << j1 << "envia a " << poke1[actualj1] << "al combate\n";
            if (vidaj2[actualj2] <= 0) //Verifica la vida actual del jugador 2
            {
                cout << "El pokemon #" << poke2[actualj2] << "ha muerto.\n";
            }
            // Y verifica la vida de los demas pokemones del j2
            if (vidaj2[1] <= 0 && vidaj2[2] <= 0 && vidaj2[3] <= 0 && vidaj2[4] <= 0 &&vidaj2[5] <= 0 &&vidaj2[6] <= 0)
            {
                ganador == 1 //Marca al j1 como ganador
                juego == false //Y termina el juego
            }
            else 
            {
                cout << j2 << "envia al " << poke2[actualj2] << "al combate\n";
            }
        }

        if (juego ==  true) // Verificacion de el estado del juego en caso de que la variable juego se marcara false.
        {
            // Pokemon 1 vs pokemon 2
            cout << j1 << ": Pokemon " << poke1[actualj1] << " (Vida: " << vidaj1[actualj1] << ")" << endl;
            cout << "VS" << endl;
            cout << j2 <<": Pokemon " << poke2[actualj2] << " (Vida: " << vidaj2[actualj2] << ")" << endl;

            // Pelea separada y verificada por turnos.
            if (turno == 1)
            {
                cout << "Menu: \n"<< "1. Usar ataque 1 \n" << "2. Usar ataque 2\n" << "3. Cambiar pokemon\n" << "4. Rendirse \n";
                cout << "Opcion: ";
                cin >> opcion;

                switch (opcion)
                {
                    case 1:
                    cout << "Usaste el ataque 1" << endl;
                    vidaJ2[actualJ2] = vidaJ2[actualJ2] - dano[poke1[actualJ1]-1][0];
                    cout << "Vida del rival: " << vidaJ2[actualJ2];
                    turno = 2;
                    break;
                    case 2:
                    cout << "Lanzaste el ataque 2" << endl;
                    vidaJ2[actualJ2] = vidaJ2[actualJ2] - dano[poke1[actualJ1]-1][1];
                    cout << "Vida del rival: " << vidaJ2[actualJ2];
                    turno = 2;
                    break;
                    case 3: 
                    cout << "Pokémons disponibles: "<< endl;
                    // menu del cambio de pokemon
                    case 4: 
                    cout << "Te has rendido " << endl;
                    ganador = 2;
                    juego == false;
                    break;
                    default:
                    cout << "Opcion invalida. Pierdes turno." << endl;
                    turno = 2;
                    break;
                }

            }
            else 
            {
                                cout << "Menu: \n"<< "1. Usar ataque 1 \n" << "2. Usar ataque 2\n" << "3. Cambiar pokemon\n" << "4. Rendirse \n";
                cout << "Opcion: ";
                cin >> opcion;

                switch (opcion)
                {
                    case 1:
                    cout << "Usaste el ataque 1" << endl;
                    vidaJ1[actualJ1] = vidaJ1[actualJ1] - dano[poke2[actualJ2]-1][0];
                    cout << "Vida del rival: " << vidaJ1[actualJ1];
                    turno = 1;
                    break;
                    case 2:
                    cout << "Lanzaste el ataque 2" << endl;
                    vidaJ1[actualJ1] = vidaJ1[actualJ1] - dano[poke2[actualJ2]-1][1];
                    cout << "Vida del rival: " << vidaJ2[actualJ2];
                    turno = 1;
                    break;
                    case 3: 
                    cout << "Pokémons disponibles: "<< endl;
                    // menu del cambio de pokemon
                    case 4: 
                    cout << "Te has rendido " << endl;
                    ganador = 1;
                    juego == false;
                    break;
                    default:
                    cout << "Opcion invalida. Pierdes turno." << endl;
                    turno = 1;
                    break;
            }

        }
    }
}