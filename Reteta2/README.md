#Reteta2

www.infoarena.ro/problema/reteta2

Mama mea este profesoară de informatică, dar îi place foarte mult să gătească. Recent am descoperit caietul ei de reţete, care arată foarte neobişnuit. Fiecare reţetă este scrisă pe un singur rând pe care sunt precizate produsele folosite, cantităţile, precum şi ordinea în care se execută operaţiile. De exemplu: (unt 50 zahar 250 ou 4) 5
ceea ce înseamnă că se amestecă 50 grame unt cu 250 grame zahăr şi cu 4 ouă timp de 5 minute.

    Pentru fiecare produs mama foloseşte întotdeauna aceeaşi unitate de măsură, aşa că unităţile de măsură nu mai sunt precizate.
    Numele produsului este scris întotdeauna cu litere mici, iar produsele şi cantităţile sunt separate prin spaţii (unul sau mai multe).
    Produsele care se amestecă împreună sunt încadrate între paranteze rotunde; după paranteza rotundă închisă este specificat timpul de preparare.

Evident, mama are şi reţeţe mai complicate:
(((zahar 100 ou 3) 5 unt 100 nuca 200) 4 (lapte 200 cacao 50 zahar 100 )3)20
Să traducem această reţetă: se amestecă 100 grame zahăr cu 3 ouă timp de cinci minute; apoi se adaugă 100 grame unt şi 200 grame nucă, amestecând totul încă 4 minute. Se amestecă 200 ml lapte cu 50 grame de cacao şi 100 grame zahăr timp de 3 minute, apoi se toarnă peste compoziţia precedentă şi se amestecă totul timp de 20 minute. 

#Date de intrare

Fişierul de intrare reteta2.in conţine pe prima linie un şir de caractere care reprezintă o reţetă.

#Date de iesire

Fişierul de ieşire reteta2.out va conţine pe prima linie timpul total necesar pentru prepararea reţetei. Pe următoarele linii sunt scrise ingredientele în ordine lexicografică (ordinea din dicţionar), câte un ingredient pe o linie. Pentru fiecare ingredient este specificat numele urmat de un spaţiu apoi de cantitatea totală necesară.

#Restrictii


    1 ≤ Lungimea unei reţete ≤ 1000
    1 ≤ Numărul de ingrediente ≤ 100
    Numele unui ingredient este scris cu maxim 20 litere mici ale alfabetului englez.
    Timpii de preparare sunt numere naturale < 100
    Cantităţile specificate în reţete sunt numere naturale < 1000
    Pentru determinarea corectă a timpului total se acordă 30% din punctajul pe test; pentru determinarea corectă a timpului total şi afişarea corectă a ingredientelor (ordonate lexicografic) se acordă integral punctajul pe test.
    Inainte sau după parantezele rotunde pot să apară sau nu spaţii.

