#Reactii

www.infoarena.ro/problema/reactii

Să considerăm o secvenţă de N substanţe chimice S = s1,s2,…,sn. Substanţele sunt numerotate distinct de la 1 la N şi fiecare substanţă apare în secvenţa S o singură dată. Să considerăm o subsecvenţă sij = (si,si+1,...,sj) şi să notăm cu minij şi maxij cel mai mic, respectiv cel mai mare număr din subsecvenţă. Subsecvenţa respectivă constituie un interval dacă ea conţine toate numerele naturale cuprinse între minij şi maxij. Cu substanţele din secvenţa s se vor efectua diferite experimente. În timpul unui experiment pot reacţiona două substanţe alăturate si şi si+1 doar dacă numerele lor de ordine sunt consecutive. În urma reacţiei se obţine o nouă substanţă, formată din substanţele care au reacţionat, notată (si,si+1). Mai mult, substanţele obţinute pot reacţiona dacă ele sunt alăturate, iar prin reunirea subsecvenţelor de substanţe ce le compun se obţine un interval.
Experimentul este declarat reuşit dacă în final, urmând regulile de mai sus, se obţine o singură substanţă formată din toate cele N substanţe din secvenţa S, aceasta fiind declarată stabilă. 

#Cerinta

Determinaţi pentru o secvenţă dată de substanţe, dacă în urma reacţiilor ce se pot produce conform regulilor din enunţ rezultă o substanţă stabilă.

#Date de intrare

Fişierul de intrare reactii.in conţine pe prima linie numărul natural N, numărul de substanţe. Pe cea de a doua linie se află un număr natural M, reprezentând numărul de secvenţe de N substanţe din fişierul de intrare. Fiecare dintre următoarele M linii conţine câte N numere naturale distincte, separate prin câte un spaţiu, reprezentând o secvenţă de N substanţe.

#Date de iesire

Fişierul de ieşire reactii.out conţine, pentru fiecare secvenţă de substanţe din fişierul de intrare, câte o linie, pe care este afişată valoarea 1 dacă pentru secvenţa respectivă se poate obţine o substanţă stabilă sau valoarea 0 în caz contrar.

#Restrictii


    2 ≤ N ≤ 15000
    1 ≤ M ≤ 20
    La un moment dat pot reacţiona doar două substanţe.
    Nu din orice secvenţă de substanţe se poate obţine în urma reacţiilor o substanţă finală stabilă.

