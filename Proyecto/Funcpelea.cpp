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

        if (juego ==  true)
        {
            cout << j1 << ": Pokemon " << poke1[actualj1] << " (Vida: " << vidaj1[actualj1] << ")" << endl;
            cout << "VS" << endl;
            cout << j2 <<": Pokemon " << poke2[actualj2] << " (Vida: " << vidaj2[actualj2] << ")" << endl;
        }
    }
}