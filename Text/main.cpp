#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
ifstream fin("text.in");
ofstream fout("text.out");
 
int litere, cuvinte;
 
void Debugwrite();
bool Litera(int curent);
void Getletters();
void Write();
 
int main()
{
    Getletters();
    Write();
    return 0;
}
 
 
void Write()
{
    fout << litere/cuvinte;
}
 
void Getletters()
{
    char curent;
    bool cuvant = false;
    while ( !fin.eof() )
    {
        curent = fin.get();
        if ( Litera(curent) )
        {
            litere++;
            cuvant = true;
        }
        else
        if (cuvant)
        {
            cuvant = false;
            cuvinte++;
        }
    }
}
 
bool Litera(int curent)
{
    if ( curent >= 'a' && curent <= 'z' || curent >= 'A' && curent <= 'Z')
        return true;
    return false;
}
void Debugwrite()
{
    cout << "Litere: " << litere << '\n' << "Cuvinte: " << cuvinte;
    cout << "\nImpartire: " << litere/cuvinte;
}
