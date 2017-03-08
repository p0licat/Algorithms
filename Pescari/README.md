#Pescari 

www.infoarena.ro/problema/pescari

Pe teritoriul comunei Ştiucleni locuiesc P pescari şi există un număr de lacuri cunoscut doar de localnici. Aceştia au câte o hartă codificată sub forma unei matrice dreptunghiulare de dimensiuni N x M în care casele pescarilor sunt reprezentate prin cifra 1, porţiunile de teren acoperit de apă sunt reprezentate prin cifra 2 iar terenul dintre case şi bălţi prin cifra 0.

Oricine ştie că un pescar bun se trezeşte de dimineaţă pentru a prinde cel mai bun loc de pescuit de pe baltă. Astfel, înainte de începutul unui sezon nou de pescuit, fiecare pescar încearcă sa pună la cale o strategie de a ajunge cât mai repede la baltă pentru a prinde locul unde peştele trage cel mai bine. Strategia constă in găsirea lungimii drumului către cea mai apropiată baltă. Lungimea unui drum este măsurată prin numărul de terenuri pe care trebuie sa le traverseze un pescar, ştiind că acesta se poate mişca din poziţia în care se află în toate cele 8 direcţii posibile. Pescarul poate să treacă în drumul lui şi prin curtea altor pescari, adică nu trebuie să ocolească celelalte case.

#Cerinta

Dându-se o hartă a comunei Ştiucleni, vi se cere să ajutaţi fiecare pescar să gasească lungimea drumului de la casa lui la cea mai apropiată baltă.

#Date de intrare

Fişierul de intrare pescari.in va conţine pe prima linie trei numere întregi N, M şi P cu semnificaţia din enunţ. Următoarele N linii vor conţine câte M cifre separate de câte un spaţiu, reprezentând codificarea unei porţiuni de teren.

#Date de iesire

Fişierul de ieşire pescari.out va conţine P linii. Pe linia i se va afla un întreg reprezentând lungimea drumului de la pescarul i la cea mai apropiată baltă. Pescarii sunt ordonaţi după linia pe care se găseşte casa lor pe hartă, iar în caz de egalitate după coloană.

#Restrictii


    3 ≤ N, M ≤ 1000
    1 ≤ P ≤ 10.000
    P ≤ (N x M) / 2
    Numărul porţiunilor de teren acoperit cu apă nu va depăşi 10.000.
    Numărul porţiunilor de teren acoperit cu apă nu va depăşi (N x M) / 2.
    Una sau mai multe porţiuni de teren acoperit cu apă alăturate formează o baltă.
    Va exista întotdeauna cel puţin o baltă.
    O casă ocupă o singură porţiune de teren. Mai multe cifre 1 alăturate reprezintă mai multe case.
    Pentru 10% din teste N, M = 3.
    Pentru alte 10% din teste, va exista un singur pescar şi o singură porţiune de teren acoperită cu apă.


