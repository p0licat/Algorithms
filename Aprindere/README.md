#Aprindere

www.infoarena.ro/problema/aprindere

Johnie vrea sa sparga o banca, in care seifurile sunt asezate in N camere alaturate. Astfel camerele sunt asezate in ordinea 0, 1, 2 ... N - 1. Pentru a putea gasi cifrurile seifurilor, Johnie are nevoie de lumina. El cunoaste initial camerele in care lumina este aprinsa, si in care nu. De asemenea, stie ca in unele camere sunt intrerupatoare care modifica starea unor becuri. Fiind un hot priceput, Johnie a programat intrerupatoarele camerelor astfel incat un intrerupator din camera i ( 0 ≤ i ≤ N - 1 ) sa modifice atat becul din camera respectiva, cat si eventual unele becuri din camere de dupa i. De asemenea, stie ca pentru fiecare intrerupator i are nevoie de un timp Ti pentru a-l actiona.
Cunoscand numarul de camere, starea lor initiala, configuratia intrerupatoarelor (programate de Johnie) cat si timpul de actionare a acestora se cere sa determinati, daca este posibil, timpul minim in care Johnie poate face lumina in toate camerele.

#Date de intrare

Pe prima linie a fisierului aprindere.in se gaseste N, numarul de camere si M, numarul de intrerupatoare. Pe urmatoarea linie gasim N cifre de 0 sau 1, 0 reprezentand o camera in care lumina este inchisa iar 1 o camera in care lumina e deschisa. Pe urmatoarele M linii gasim mai intai 3 numere C, TC si NRC, reprezentand camera intrerupatorului, timpul necesar actionarii intrerupatorului respectiv si numarul de camere in care modifica starea becurilor. Urmeaza apoi NRC numere reprezentand indicii camerelor in care becurile sunt schimbate de intrerupatorul curent (camera i se va afla mereu in aceasta multime).

#Date de iesire

In fisierul aprindere.out se gaseste un singur numar, cu semnificatia de mai sus.

#Restrictii


      1 ≤ N ≤ 1000
      1 ≤ M ≤ N
      1 ≤ NRi ≤ 100
      1 ≤ Ti ≤ 1000
      Intr-o camera poate exista maxim un intrerupator
      Pentru datele de test folosite va exista mereu solutie


