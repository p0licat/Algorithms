#Rj

www.infoarena.ro/problema/rj

In ultima ecranizare a celebrei piese shakespeariene Romeo si Julieta traiesc intr-un oras modern, comunica prin e-mail si chiar invata sa programeze. Intr-o secventa tulburatoare sunt prezentate framantarile interioare ale celor doi eroi incercand fara succes sa scrie un program care sa determine un punct optim de intalnire.
Ei au analizat harta orasului si au reprezentat-o sub forma unei matrice cu n linii si m coloane, in matrice fiind marcate cu spatiu zonele prin care se poate trece (strazi lipsite de pericole) si cu 'X' zonele prin care nu se poate trece. De asemenea, in matrice au marcat cu 'R' locul in care se afla locuinta lui Romeo, iar cu 'J' locul in care se afla locuinta Julietei.
Ei se pot deplasa numai prin zonele care sunt marcate cu spatiu, din pozitia curenta in oricare dintre cele 8 pozitii invecinate (pe orizontala, verticala sau diagonale).
Cum lui Romeo nu ii place sa astepte si nici sa se lase asteptat, ei au hotarat ca trebuie sa aleaga un punct de intalnire in care atat Romeo, cat si Julieta, sa poata ajunge in acelasi timp, plecand de acasa. Fiindca la intalniri amandoi vin intr-un suflet, ei estimeaza timpul necesar pentru a ajunge la intalnire prin numarul de elemente din matrice care constituie drumul cel mai scurt de acasa pana la punctul de intalnire. Si cum probabil exista mai multe puncte de intalnire posibile, ei vor sa il aleaga pe cel in care timpul necesar pentru a ajunge la punctul de intalnire este minim.

#Cerinta

Scrieti un program care sa determine o pozitie pe harta la care Romeo si Julieta pot sa ajunga in acelasi timp. Daca exista mai multe solutii, programul trebuie sa determine o solutie pentru care timpul este minim.

#Date de intrare

Fisierul de intrare rj.in contine:

    pe prima linie numerele naturale N M, care reprezinta numarul de linii si respectiv de coloane ale matricei, separate prin spatiu.
    pe fiecare dintre urmatoarele N linii se afla M caractere (care pot fi doar 'R', 'J', 'X' sau spatiu) reprezentand matricea.

#Date de iesire

Fisierul de iesire rj.out va contine o singura linie pe care sunt scrise trei numere naturale separate prin cate un spatiu tmin x y, avand semnificatia:

    x y reprezinta punctul de intalnire (x - numarul liniei, y - numarul coloanei).
    tmin este timpul minim in care Romeo (respectiv Julieta) ajunge la punctul de intalnire.

#Restrictii


    1 < N , M ≤ 100
    Liniile si coloanele matricei sunt numerotate incepand cu 1.
    Pentru datele de test exista intotdeauna solutie.
    In cazul existentei mai multor solutii se va afisa solutia in care linia punctului de intalnire este minima. Daca si asa exista mai multe solutii, se va afisa cea in care coloana punctului de intalnire este minima.

