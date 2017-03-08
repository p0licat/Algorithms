#Immortal

www.infoarena.ro/problema/immortal

Cei care au văzut filmul Nemuritorul, ştiu că fraza cu care nemuritorii încep lupta este "Nu poate să rămână decât unul singur". Să încercăm să simulăm povestea nemuritorilor.

Într-o zonă dreptunghiulară formată din N linii (numerotate de la 1 la N) şi M coloane (numerotate de la 1 la M) se află maxim N x M - 1 nemuritori. Doi nemuritori vecini se "luptă" între ei şi cel care pierde lupta este eliminat. "Lupta" constă în săritura unuia dintre nemuritori peste celălalt, dacă această săritură se poate face. Săritura se poate face pe orizontală sau verticală şi nemuritorul peste care s-a sărit dispare. Prin vecin al nemuritorului din poziţia (i,j) înţelegem un nemuritor din una dintre poziţiile (i-1,j), (i+1,j), (i,j-1), (i,j+1). Deci, după luptă nemuritorul din câmpul (i,j) se va găsi în una dintre poziţiile: (i-2,j), (i+2,j), (i,j-2) sau (i,j+2), dacă această poziţie este liberă şi este în interiorul zonei.

#Cerinta

Se cere să se determine o succesiune a luptelor ce pot fi purtate, astfel încât la final să rămână un singur nemuritor.

#Date de intrare

Fişierul de intrare immortal.in conţine pe prima linie trei valori naturale N, M, I, separate prin câte un spaţiu, reprezentând numărul de linii, numărul de coloane ale zonei descrise şi respectiv numărul de nemuritori existenţi iniţial. Următoarele I linii conţin fiecare câte două numere naturale x şi y, separate printr-un spaţiu, reprezentând poziţiile unde se găsesc iniţial cei I nemuritori (linia şi coloana). 

#Date de iesire

Fişierul de ieşire immortal.out va conţine I - 1 linii, fiecare linie descriind o "luptă". Luptele vor fi scrise în ordinea în care au avut loc. O linie va conţine 4 numere naturale care indică: primele două poziţia de pe care pleacă un nemuritor la "luptă", ultimele două poziţia pe care acesta ajunge după "luptă". Pentru ca "lupta" să fie corectă, în poziţia peste care nemuritorul "sare" trebuie să existe un nemuritor care va "muri". O poziţie va fi specificată prin indicele de linie urmat de indicele de coloană. Valorile scrise pe aceeaşi linie vor fi separate prin spaţii.

#Restrictii


    2 ≤ N, M ≤ 20
    2 ≤ I ≤ min(15, N * M - 1)
    Pentru datele de test există întotdeauna soluţie.

