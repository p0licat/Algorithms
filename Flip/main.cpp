#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
#define DIM 20
 
ifstream fin("flip.in");
ofstream fout("flip.out");
 
int n, m;
int maxim;
int a[DIM][DIM];
bool s[DIM];
 
void Read();
void Back(int k);
void Flip();
 
int main()
{
    Read();
    Back(1);
    fout << maxim;
 
    fin.close();
    fout.close();
    return 0;
}
 
void Flip()
{
    int sumt = 0; // suma pe toata matricea
    for (int j = 1; j <= m; ++j)
    {
        int sum = 0; // suma maxima pe coloane
        for (int i = 1; i <= n; ++i) {
            if ( s[i] ) sum += -a[i][j];
            else sum += a[i][j];
        }
 
        if ( sum < 0 ) sum *= -1; sumt += sum;
        maxim = max(maxim, sumt);
    }
}
 
void Back(int k) // fiecare permutare a sirului s este linia rasturnata
{
    if ( k == n + 1 ) {
        Flip(); //pentru fiecare posibilitate se calculeaza smax
        return;
    }
    for (int i = 0; i <= 1; ++i)
    {
        s[k] = i;
        Back(k+1);
    }
}
 
void Read()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> a[i][j];
}
