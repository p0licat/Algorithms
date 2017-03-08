#Insule

www.infoarena.ro/problema/insule

Arhipelagul RGB este format din insule care aparţin ţărilor R, G şi B.Putem reprezenta harta arhipelagului ca o matrice cu N linii şi M coloane cu elemente din mulţimea {0, 1, 2, 3} astfel:

    un element egal cu 0 reprezintă o zonă acoperită de apă
    un element egal cu 1 reprezintă o zonă de pământ aparţinând unei insule din ţara R
    un element egal cu 2 reprezintă o zonă de pământ aparţinând unei insule din ţara G
    un element egal cu 3 reprezintă o zonă de pământ aparţinând unei insule din ţara B

Se consideră că două elemente ale matricei sunt vecine dacă ele au aceeaşi valoare şi fie sunt consecutive pe linie, fie sunt consecutive pe coloană. Două elemente aparţin aceleiaşi insule dacă ele sunt vecine sau dacă se poate ajunge de la un element la celălalt pe un drum de-a lungul căruia oricare două elemente consecutive sunt vecine.
Pentru a încuraja relaţiile de colaborare dintre ţările R şi G, se doreşte construirea unui pod care să unească o insulă aparţinând ţării R de o insulă aparţinând ţării G. Podul trebuie să respecte următoarele condiţii:

    să înceapă pe o zonă cu apă consecutivă pe linie sau coloană cu o zonă aparţinând ţării R;
    să se termine pe o zonă cu apă consecutivă pe linie sau coloană cu o zonă aparţinând ţării G;
    să traverseze numai zone acoperite cu apă;
    oricare două elemente consecutive ale podului trebuie să fie vecine;
    lungimea podului să fie minimă (lungimea podului este egală cu numărul de elemente traversate de pod).


#Cerinta

Dată fiind harta arhipelagului să se determine câte insule aparţin fiecărei ţări, precum şi lungimea minimă a unui pod care să satisfacă condiţiile din enunt.

#Date de intrare

Fişierul de intrare insule.in conţine pe prima linie numerele naturale N şi M, separate prin spaţiu. Pe următoarele n linii este descrisă harta arhipelagului. Pe fiecare dintre aceste n linii sunt scrise câte m valori din mulţimea {0, 1, 2, 3}; valorile nu sunt separate prin spaţii. 

#Date de iesire

Fişierul de ieşire insule.out va conţine o singură linie pe care vor fi scrise patru numere naturale separate prin spaţii NR NG NB Lg, unde NR reprezintă numărul de insule aparţinând ţării R, NG numărul de insule aparţinând ţării G, NB numărul de insule aparţinând ţării B, iar Lg lungimea minimă a podului.

#Restrictii


    1 ≤ N,M ≤ 100
    Se garantează că pe hartă există cel puţin un element 1, un element 2 şi un element 0.
    Se acordă 40% din punctaj pentru determinarea corectă a numărului de insule din fiecare ţară; se acordă punctaj integral pentru rezolvarea corectă a tuturor cerinţelor.
    Începutul şi sfârşitul podului pot să coincidă.
    Pentru datele de test există întotdeauna soluţie.

