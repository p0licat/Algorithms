#Alee

www.infoarena.ro/problema/alee

Parcul orasului a fost neglijat mult timp, astfel ca acum toate aleile sunt distruse. Prin urmare, anul acesta Primaria si-a propus sa faca reamenajari. Parcul are forma unui patrat cu latura de N metri si este inconjurat de un gard care are exact doua porti. Proiectantii de la Primarie au realizat o harta a parcului si au trasat pe harta un caroiaj care imparte parcul in N*N zone patrate cu latura de 1 metru. Astfel harta parcului are aspectul unei matrice patratice cu N linii si N coloane. Liniile si, respectiv, coloanele sunt numerotate de la 1 la N. Elementele matricei corespund zonelor patrate de latura 1 metru. O astfel de zona poate sa contina un copac sau este libera. Edilii orasului doresc sa paveze cu un numar minim de dale patrate cu latura de 1 metru zonele libere (fara copaci) ale parcului, astfel incat sa se obtina o alee continua de la o poarta la alta.

#Cerinta

Scrieti un program care sa determine numarul minim de dale necesare pentru construirea unei alei continue de la o poarta la cealalta.

#Date de intrare

Fisierul de intrare alee.in contine pe prima linie doua valori naturale N si M separate printr-un spatiu, reprezentand dimensiunea parcului, respectiv numarul de copaci care se gasesc in parc. Fiecare dintre urmatoarele M linii contine cate doua numere naturale X si Y separate printr-un spatiu, reprezentand pozitiile copacilor in parc (X reprezinta linia, iar Y reprezinta coloana zonei in care se afla copacul). Ultima linie a fisierului contine patru numere naturale X1, Y1, X2, Y2, separate prin cate un spatiu, reprezentand pozitiile celor doua porti ( X1, Y1 reprezinta linia si respectiv coloana zonei ce contine prima poarta, iar X2, Y2 reprezinta linia si respectiv coloana zonei ce contine cea de a doua poarta). 


#Date de iesire

Fisierul de iesire alee.out va contine o singura linie pe care va fi scris un numar natural care reprezinta numarul minim de dale necesare pentru construirea aleii.

#Restrictii


    1 ≤ N ≤ 175
    1 ≤ M ≤ N*N
    Aleea este continua daca oricare doua placi consecutive au o latura comuna.
    Aleea incepe cu zona unde se gaseste prima poarta si se termina cu zona unde se gaseste cea de a doua poarta.
    Pozitiile portilor sunt distincte si corespund unor zone libere.
    Pentru datele de test exista intotdeauna solutie.


