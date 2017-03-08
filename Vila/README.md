#Vila

www.infoarena.ro/problema/vila

Un important om al tarii are o vila, reprezentata printr-o matrice ce contine numai caracterele 1 si -, unde 1 reprezinta zid iar - spatiu liber. O camera este formata dintr-o multime de casute libere cu proprietatea ca se poate ajunge din orice casuta a camerei in oricare alta casuta ale aceleiasi camere, mergand doar pe una din directiile {N, S, E, V}, si trecand doar prin spatii libere. De exemplu, vila codificata prin matricea de mai jos are 3 camere:

1111111111111
1-------1----
----111111111
1-------1---1
1111111111111

#Cerinta

Sa se determine:

a ) cate camere are vila;

b ) care este camera cu suprafata cea mai mare;

c ) ce perete trebuie indepartat ( prin perete se intelege un singur caracter de 1 ), astfel incat sa se obtina cea mai mare camera ( ca suprafata ), in raport cu toate celelalte camere care se pot obtine indepartand un perete.


#Date de intrare

Fisierul de intrare vila.in are urmatorul format: pe prima linie se gasesc doua numere naturale M si N, despartite printr-un spatiu, care reprezinta numarul de linii, respectiv de coloane, ale matricii ce reprezinta vila, iar pe urmatoarele M linii se gasesc cate N caractere din multimea {1, -}, descriind matricea.

#Date de iesire 

Fisierul de iesire vila.out contine raspunsurile in urmatorul format: prima linie contine numarul de camere, a doua linie contine aria camerei de suprafata maxima, iar a treia linie contine coordonatele zidului eliminat si aria camerei de suprafata maxima rezultata.

#Restrictii


    1 ≤ N, M < 128
    Daca exista mai multe solutii pentru punctul c, se va afisa cea in care prima coordonata este minima. Daca si in acest caz exista mai multe solutii, se va afisa cea in care suma coordonatelor este minima
    Nu se acorda punctaje partiale



