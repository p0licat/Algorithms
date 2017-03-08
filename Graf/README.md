#Graf

www.infoarena.ro/problema/graf

Se stie ca intr-un graf neorientat conex, intre oricare doua varfuri exista cel putin un lant iar lungimea unui lant este egala cu numarul muchiilor care-l compun. Definim notiunea lant optim intre doua varfuri X si Y ca fiind un lant de lungime minima care are ca extremitati varfurile X si Y. Este evident ca intre oricare doua varfuri ale unui graf conex vom avea unul sau mai multe lanturi optime, depinzand de configuratia grafului.

#Cerinta

Fiind dat un graf neorientat conex cu N varfuri etichetate cu numerele de ordine 1,2,...,N si doua varfuri ale sale notate X si Y (1 ≤ X,Y ≤ N, X!=Y), se cere sa scrieti un program care determina varfurile care apartin tuturor lanturilor optime dintre X si Y.

#Date de intrare

Fisierul graf.in contine:

    pe prima linie patru numere naturale reprezentand: N (numarul de varfuri ale grafului), M (numarul de muchii), X si Y (cu semnificatia din enunt).
    pe urmatoarele M linii cate doua numere naturale nenule Ai,Bi (1 ≤ Ai,Bi ≤ N, Ai != Bi, pentru 1 ≤ i ≤ M) fiecare dintre aceste perechi de numere reprezentand cate o muchie din graf.

#Date de iesire

Fisierul graf.out va contine:

    pe prima linie, numarul de varfuri comune tuturor lanturilor optime dintre X si Y;
    pe a doua linie, numerele corespunzatoare etichetelor acestor varfuri, dispuse in ordine crescatoare; intre doua numere consecutive de pe aceasta linie se va afla cate un spatiu.

#Restrictii


    2 ≤ N ≤ 7500; 1 ≤ M ≤ 14000
    pentru 50% din teste N ≤ 200


