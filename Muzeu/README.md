#Muzeu

www.infoarena.ro/problema/muzeu

Un muzeu are forma patratica si contine N*N camere ce pot fi vizitate. Unele camere sunt deschise si contin opere de arta, altele sunt inchise (sunt folosite pentru alte scopuri). In unele din camerele libere, se afla paznici. Directorul muzeului se teme de eventualitatea unei spargeri si de aceea doreste sa evalueze cat de bine au fost asezati paznicii in camerele libere. Mai precis, el doreste sa afle, pentru fiecare camera libera, care este distanta minima pana la cel mai apropiat paznic (numarul minim de camere prin care trebuie sa intre un paznic pentru a ajunge la camera respectiva). Paznicii se pot deplasa numai in camerele libere din Nord, Est, Sud sau Vest (cu conditia sa nu paraseasca muzeul).

#Date de intrare

Pe prima linie a fisierului muzeu.in se afla numarul intreg N, reprezentand numarul de linii (si de coloane) ale muzeului (muzeul avand N*N camere). Urmatoarele N linii contin cate N caractere fiecare:

    `.' pentru camera libera in care nu se afla paznic
    `P' pentru camera libera in care se afla paznic
    `#' pentru camera inchisa (prin care nu pot trece nici paznicii, dar in care nu pot intra nici hotii)

#Date de iesire

In fisierul muzeu.out veti afisa N linii, fiecare din ele continand N numere intregi (separate prin spatii). Fiecare numar afisat corespunde camerei de pe linia si coloana corespunzatoare din fisierul de intrare. Pentru fiecare camera libera veti afisa distanta minima pana la cel mai apropiat paznic (sau -1 daca nici un paznic nu poate ajunge in aceasta camera). Pentru camerele inchise, veti afisa -2.

#Restrictii

	1 ≤ N ≤ 250

