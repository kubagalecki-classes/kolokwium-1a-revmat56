#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagiatelle {

public:
	Tagiatelle(double l, double w, double r) : L(l), W(w), R(r)	{}
	Tagiatelle()
	{
		L = 0.5;
		W = 0.5;
		R = 0.5;
	}
	double ileMaki(unsigned P) const
	{
		return P * L * W * (1.0 - R) * C;
	}

private: 
	double L;
	double W;
	double R;

	static const double C;

};
