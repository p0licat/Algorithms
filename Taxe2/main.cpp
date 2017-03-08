#include <iostream>
#include <fstream>
#include <queue>
#include <utility>
#include <algorithm>
#include <climits>
using namespace std;
#define DIM 101
#define INF INT_MAX
 
void Read();
void WriteMap(int map[DIM][DIM]);
void LEE();
void Executa(int x, int y);
bool OK(int x, int y);
void Write();
 
int birou[DIM][DIM];
int Lee[DIM][DIM];
 
const char di[] = {0, 1, 0, -1},
           dj[] = {-1, 0, 1, 0};
 
int S, n;
queue<pair<int, int> > coada;
 
int main()
{
    Read();
    LEE();
    Write();
 
    return 0;
}
 
void Write()
{
    ofstream fout("taxe2.out");
    if ( S - Lee[n-1][n-1] >= 0 )
        fout << S - Lee[n-1][n-1] << '\n';
    else
        fout << -1;
    fout.close();
}
 
inline bool OK(int x, int y) {
    return !(x < 0 || y < 0 || x > n || y > n);
}
 
void Executa(int x, int y)
{
    int iv, jv;
    for (int k = 0; k < 4; ++k)
    {
        iv = x + di[k]; jv = y + dj[k];
        if ( OK(iv, jv) )
        {
            if ( Lee[x][y] + birou[iv][jv] <= S && Lee[x][y] + birou[iv][jv] < Lee[iv][jv] )
            {
                coada.push(make_pair(iv, jv));
                Lee[iv][jv] = Lee[x][y] + birou[iv][jv];
            }
        }
    }
}
 
void LEE()
{
    coada.push(make_pair(0, 0));
    Lee[0][0] = birou[0][0];
    while ( !coada.empty() )
    {
        Executa(coada.front().first, coada.front().second);
        coada.pop();
    }
}
 
void WriteMap(int map[DIM][DIM])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            if ( map[i][j] != INF )
                cout << map[i][j] << ' ';
            else
                cout << 'X' << ' ';
        cout << '\n';
    }
}
 
void Read()
{
    ifstream fin("taxe2.in");
    fin >> S >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            fin >> birou[i][j];
            Lee[i][j] = INF;
        }
    fin.close();
}
