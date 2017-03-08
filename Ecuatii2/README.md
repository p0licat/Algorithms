#Ecuatii 2

www.infoarena.ro/problema/ecuatii2

Sa consideram ecuatii de gradul I, de forma: expresie1=expresie2. Expresiile specificate sunt constituite dintr-o succesiune de operanzi, intre care exista semnul + sau semnul - (cu semnificatia binecunoscuta de adunare, respectiv scadere). Fiecare operand este fie un numar natural, fie un numar natural urmat de litera x (litera x reprezentand necunoscuta), fie doar litera x (ceea ce este echivalent cu 1x).
De exemplu: 2x-5+10x+4=20-x
Observati ca in ecuatii nu apar paranteze si necunoscuta este intotdeauna desemnata de litera mica x.

#Cerinta

Scrieti un program care sa rezolve ecuatii de gradul I, in formatul specificat in enuntul problemei.

#Date de intrare

Fisierul de intrare ecuatii2.in contine pe prima linie un numar natural N, reprezentand numarul de ecuatii din fisier. Pe fiecare dintre urmatoarele N linii este scrisa cate o ecuatie.

#Date de iesire

In fisierul de iesire ecuatii2.out vor fi scrise N linii, cate una pentru fiecare ecuatie din fisierul de intrare. Pe linia i va fi scrisa solutia ecuatiei de pe linia i+1 din fisierul de intrare. Daca solutia ecuatiei este un numar real, atunci acesta se va scrie cu 4 zecimale. Raspunsul este considerat corect daca diferenta in valoare absoluta dintre solutia corecta si solutia concurentului este < 10-3. In cazul in care ecuatia admite o infinitate de solutii, se va scrie mesajul infinit (cu litere mici). Daca ecuatia nu admite solutii, se va scrie mesajul imposibil (de asemenea cu litere mici).

#Restrictii


    1 ≤ N ≤ 10
    Lungimea unei ecuatii nu depaseste 255 caractere.
    Ecuatiile nu contin spatii.
    Numerele naturale care intervin in ecuatii sunt ≤ 1000.
    Punctajul pe un test se acorda daca si numai daca toate ecuatiile din testul respectiv au fost rezolvate corect.



