#Tsunami

www.infoarena.ro/problema/tsunami

Tsunamiul este valul mareic ce se propagă prin apa oceanelor/mărilor, ca urmare a producerii unor erupţii subacvatice sau/şi a unor cutremure submarine sau de coastă foarte puternice.
Cercetătorii doresc să preîntâmpine efectele unor posibile valuri mareice prin marcarea şi clasificarea zonelor al căror risc de inundare este ridicat.
Teritoriul studiat a fost împărţit în n*m pătrate identice (zone) rezultând o hartă digitizată, reprezentată sub forma unui tablou bidimensional cu N linii şi M coloane, fiecare element al tabloului memorând cota (înălţimea) terenului din pătratul unitate corespunzător. Zonele de apă au cota 0, iar zonele de uscat au cote mai mari decât 0.
Orice tsunami este clasificat în funcţie de înălţimea valului mareic, pe o scară de la 1 la 10. Cercetătorii doresc să marcheze zonele de risc ce pot fi afectate de un potenţial tsunami.
Iniţial, valul mareic apare în toate zonele de cotă 0 vecine cu cel puţin o zonă de uscat. O zonă teritorială poate fi afectată dacă are cota strict mai mică decât înălţimea valului mareic şi se află în vecinătatea apei sau în vecinătatea unei zone afectate. Două pătrate unitate se învecinează dacă au o latură comună.

#Cerinta

Dată fiind harta digitizată a zonelor monitorizate, să se determine numărul zonelor de uscat afectate de un tsunami de înălţime H.

#Date de intrare

Fişierul de intrare tsunami.in conţine pe prima linie trei numere naturale N M H separate prin câte un spaţiu, reprezentând dimensiunile hărţii, respectiv înălţimea valului mareic. Pe următoarele N linii sunt scrise câte M numere naturale separate prin câte un spaţiu reprezentând, în ordine, cotele din cele N*M pătrate teritoriale unitate ale hărţii.

#Date de iesire

Fişierul de ieşire tsunami.out conţine o singură valoare ce reprezintă numărul pătratelor unitate afectate de un tsunami de înălţime H.

#Restrictii


    2 ≤ N, M ≤ 1 000
    1 ≤ H ≤ 10
    Zona monitorizată nu conţine lacuri interioare (pătrate unitate învecinate, având cota 0, înconjurate complet de pătrate unitate având cote strict mai mari decât 0)
    Cotele sunt numere naturale ≤ 1 000


