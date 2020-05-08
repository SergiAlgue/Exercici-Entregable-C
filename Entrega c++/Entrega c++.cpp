
#include <iostream>
#include "BaseEnemy.h"
#include "BasePlayer.h"
#include "EnrageEnemy.h"

using namespace std;

////Main on instanciem tot el necessari per mostrar la vida que li queda amb el jugador.

int main()
{
	//Instanciem i declarem el jugador i l'enemic amb la vida i el damage.

	BasePlayer Jugador(300.0f);
	BasePlayer* Jugador_2 = &Jugador;


	BaseEnemy Enemic_2(40.0f, 200.0f);
	BaseEnemy* Enemic_prt = &Enemic_2;



	//Restem la vida que li causa el enemic.

	Jugador_2->ApplyDamage(Jugador_2, Enemic_2.getLife());




	//Mostrem el text Vida total i la vida del Jugador

	cout << "L'enemic t ha atacat per sorpresa!!" << endl;
	cout << "Et queda " << Jugador.getLife() << " de vida total " << endl;

	cout << endl;



	//Pausem l'execucio
	system("pause");


	
}