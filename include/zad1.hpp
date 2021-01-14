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
		return (P * Lc * Wc * (1.0 - Rc) * C);
	}

	const double Lc = L;
	const double Wc = W;
	const double Rc = R;

private: 
	double L;
	double W;
	double R;



	static const double C;

};
