#include <string>
#include <iostream>
#include "etudiant.h"

Etudiant::Etudiant(){

}

Etudiant::Etudiant( std::string nom , int note1 , int note2 ){
	this->Setnom( nom );
	this->Setnote1( note1 );
	this->Setnote2( note2 );
}


void Etudiant::Setnom( std::string nom ){
	m_nom = nom;
}

void Etudiant::Setnote1( int note ){

	if( note > 20 ){
		note = 20;
	}else if( note < 0 ){
		note = 0;
	}

	m_note1 = note;
}

void Etudiant::Setnote2( int note ){

	if( note > 10 ){
		note = 10;
	}else if( note < 0 ){
		note = 0;
	}

	m_note2 = note;
}


std::string Etudiant::Getnom(){
	return m_nom;
}

int Etudiant::Getnote1(){
	return m_note1;
}

int Etudiant::Getnote2(){
	return m_note2;
}

void Etudiant::afficher(){
	std::cout << m_nom << " : " << m_note1 << "/20" << "," << m_note2 << "/10\n";
}

float Etudiant::calculerMoyenne(){
	return ((float)m_note1 + (float)m_note2*2)/2;
}