# holbertonschool-printf

## var_detect.c

une fonction qui vérifie la lettre correspond a l'une des lettre de parametre précedent un %.
la fonction verifie simple si la lettre donnée en parametre contient l'une des lettre suivante : 
"dicspux" et retourne 1 ou 0. 1 si elle contient, 0 si elle contient pas.

## _printf.c

dans cette fonctione on affiche simplement lettre par lettre grace a la fonction _putchar.
juste avant d'afficher, on vérrifie si la char correspond à '%', si c'est le cas on lui donne var_detect
pour vérifier si la lettre suivit du '%' est l'une des lettre de parametre accepté. Si c'est le cas, on affiche pour l'instant "(x)" simplement pour dire que la fonction détecte bien les %<lettre>. 

# fonctionnement

exemple : 

_printf("Bonjours %d ceci est un test : %a %e %i %o %u %x");

resultat attendu :

Bonjours (x) ceci est un test : %a %e (x) %o (x) (x)
