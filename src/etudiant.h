#ifndef CLASS_Etudiant
# define CLASS_Etudiant
#include <string>
#include <iostream>

class Etudiant
{
public:
	Etudiant();
	Etudiant( std::string nom , int note1 , int note2 );

	void Setnom( std::string nom );

	std::string Getnom();

	void Setnote1( int note );
	void Setnote2( int note );

	int Getnote1();
	int Getnote2();

	void afficher();
	float calculerMoyenne();
private:
	int	m_note1;
	int	m_note2;
	std::string	m_nom;
protected:

};

#endif