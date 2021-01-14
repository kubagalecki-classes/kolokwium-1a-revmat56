#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

class Penne : public Makaron {
	
public:
	double ileMaki(unsigned P) const
	{
		return P;
	}

};

// tutaj definicja metody gotujMakaron

Makaron* gotujMakaron(std::string& s)
	{
		if (s.front() == s.back())
		{
			 ptr = new Tagliatelle(3.12,0.42,0.1);
			return ptr;
		}
		else
		{
			ptr = new Penne();
			return ptr;
		}
	};
	
