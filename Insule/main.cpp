#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <deque>
using namespace std;
#define DIM 101
typedef pair<int, int> PII;
 
void Read();
void Writedebug();
void Fill();
void Umple();
void Write();
bool OK(const int& i, const int& j);
int Bridge();
 
short n, m;
int a[DIM][DIM];
deque<PII> coada;
vector<int> nrinsule(4);
vector<PII> trei;
 
const char di[] = {0, -1, 0, 1},
           dj[] = {1, 0, -1, 0};
 
int main()
{
    Read();
    Fill();
    Write();
 
 
    return 0;
}
 
int Bridge()
{
    coada.clear();
 
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if ( a[i][j] == -1 )
            {
                for (int k = 0; k < 4; ++k)
                {
                    int iv = i + di[k]; int jv = j + dj[k];
                    if ( OK(iv, jv) && !a[iv][jv] )
                    {
                        coada.push_back(make_pair(iv, jv));
                        a[iv][jv] = 1;
                    }
                }
            }
        }
    int iv, jv, x, y;
    while ( !coada.empty() )
    {
        for (int k = 0; k < 4; ++k)
        {
            x = coada.front().first; y = coada.front().second;
            iv = x + di[k]; jv = y + dj[k];
 
            if ( OK(iv, jv) && !a[iv][jv] || a[iv][jv] == -2 )
            {
                if ( a[iv][jv] == -2 && a[x][y] != -1)
                    return a[x][y];
                else
                {
                    a[iv][jv] = a[x][y] + 1;
                    coada.push_back( make_pair(iv, jv) );
                }
            }
        }
 
        coada.pop_front();
    }
 
    return 1;
}
 
bool OK(const int& i, const int& j)
{
    if ( i < n && j < m && i >= 0 && j >= 0 )
        return true;
    return false;
}
 
void Write()
{
    ofstream fout("insule.out");
 
    for (int i = 1; i <= 3; ++i)
    {
        fout << nrinsule[i] << ' ';
    }
    fout << Bridge();
    fout.close();
}
 
void Umple()
{
    int iv, jv, i, j;
    while ( !coada.empty() )
    {
        for (int k = 0; k < 4; ++k)
        {
            i = coada.front().first, j = coada.front().second;
            iv = coada.front().first + di[k]; jv = coada.front().second + dj[k];
            if (  OK(iv, jv) && a[iv][jv] == -a[i][j] )
            {
                coada.push_back(make_pair(iv, jv));
                a[iv][jv] *= -1;
            }
        }
 
        coada.pop_front();
    }
}
 
void Fill()
{
    bool done = false;
    while ( !done )
    {
        done = true;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            if ( a[i][j] > 0)
            {
                done = false;
                coada.push_back(make_pair(i, j));
                nrinsule[a[i][j]]++;
                a[i][j] *= -1;
                Umple();
                break;
            }
    }
    /*
    vector<PII>::iterator it;
    for (it = trei.begin(); it != trei.end(); ++it)
        a[it->first][it->second] = 0;
    */
}
 
void Writedebug()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << setw(2) << a[i][j];
        cout << '\n';
    }
    cout << '\n';
}
 
void Read()
{
    ifstream fin("insule.in");
    fin >> n >> m;
    char x; int cur;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            fin >> x;
            cur = x - '0';
            if ( cur == 3 )
                trei.push_back(make_pair(i, j));
            a[i][j] = cur;
        }
 
    fin.close();
}
