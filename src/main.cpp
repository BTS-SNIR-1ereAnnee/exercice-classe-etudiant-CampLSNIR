#include <string>
#include <iostream>
#include "etudiant.h"




int main(){

	std::string nom;
	int note1;
	int note2;

	Etudiant eleve;
	std::cout << "Entrer le nom\n";
	std::cin >> nom;
	std::cout << "Entrer la premiere note sur 20\n";
	std::cin >> note1;
	std::cout << "Entrer la premiere note sur 10\n";
	std::cin >> note2;

	eleve.Setnom( nom );
	eleve.Setnote1( note1 );
	eleve.Setnote2( note2 );

	std::cout << "la moyenne de " << eleve.Getnom() << " est " << eleve.calculerMoyenne() << "\n";

	eleve.afficher();

	return 0;
}