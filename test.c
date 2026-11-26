#include "main.h"

int main(void)
{
	_printf("Bonjours %d ceci est un test : %a %e %i %o %u %x"); // on test ici
	/*
	resultat attendu :
						Bonjours (x) ceci est un test : %a %e (x) %o (x) (x)
	les (x) signifie que les % on bien été détecté.
	*/
	_putchar('\n');
	return (0);
}
