#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <deque>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define SIZE 129
typedef pair<int, int> coord;
 
ofstream fout("vila.out");
 
void Read();
void FillLee();
void WriteMap();
int Lee();
void Execute(int x, int y, int& aria);
bool OK(int x, int y);
 
int nr = 1;
int n, m;
int map[SIZE][SIZE];
deque<coord> coada;
vector<int> arii(9000);
 
const char di[] = {-1, 0, 1, 0 },
           dj[] = {0, 1, 0, -1 };
 
int main()
{
    Read();
    FillLee();
 
    int maxim = -1, maxxum = -1, imax, jmax;
 
    for (int i = 1; i < nr; ++i)
        maxim = max ( maxim, arii[i] );
 
    fout << nr - 1 << '\n';
    fout << maxim << '\n';
 
    vector<bool> sume(9000);
 
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int sum = 0;
            sume.assign(sume.size(), false);
            if ( map[i][j] == -1 )
            for (int k = 0; k < 4; ++k)
            {
                int ii = i - di[k]; int jj = j - dj[k];
                if ( ii > 0 && jj > 0 && ii <= n && jj <= m )
                {
                    int punct = map[ii][jj];
                    if ( punct != -1 )
                    {
                        if ( !sume[punct] )
                        sum += arii[punct];
                        sume[punct] = true;
                    }
                }
            }
            if ( maxxum < sum )
            {
                maxxum = sum;
                imax = i;
                jmax = j;
            }
        }
    fout << imax << ' ' << jmax << ' ' << maxxum + 1 << '\n';
 
    return 0;
}
 
bool OK(int x, int y)
{
    if ( x > 0 && y > 0 && x <= n && y <= m )
        if ( map[x][y] == 0 )
            return true;
    return false;
}
 
void Execute(int x, int y, int& aria)
{
    int ii, jj;
    for ( int k = 0; k < 4; ++k )
    {
        ii = x - di[k]; jj = y - dj[k];
        if ( OK(ii, jj) )
        {
            coada.push_back( make_pair( ii, jj ) );
            map[ii][jj] = map[x][y];
            aria++;
        }
    }
 
}
 
int Lee()
{
    int aria = 1;
    while ( !coada.empty() )
    {
        Execute(coada.front().first, coada.front().second, aria);
        coada.pop_front();
    }
    return aria;
}
 
void WriteMap()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if ( map[i][j] < 0 )
                cout << 'x' << ' ';
            else
                cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
}
 
void FillLee()
{
    for ( int i = 1; i <= n; ++i )
        for ( int j = 1; j <= m; ++j )
            if ( map[i][j] == 0 )
            {
                map[i][j] = nr;
                coada.push_back(make_pair(i, j));
                arii[nr] = Lee();
                nr++;
            }
}
 
void Read()
{
    ifstream fin("vila.in");
    fin >> n >> m;
    char c;
 
    for (int i = 0; i <= n + 1; ++i)
    {
        map[i][0] = -1;
        map[i][m+1] = -1;
    }
    for (int j = 0; j <= m + 1; ++j)
    {
        map[0][j] = -1;
        map[n+1][j] = -1;
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            fin >> c;
            if ( c == '-' )
                map[i][j] = 0;
            if ( c == '1' )
                map[i][j] = -1;
        }
    fin.close();
}
