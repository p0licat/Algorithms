#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
typedef vector<int>::iterator IT;
 
ofstream fout("asmax.out");
 
bool s[16001];
vector<int> sum;
vector<vector<int> > G;
int n;
 
void Read();
void Df(int x);
 
int main()
{
    Read();
    Df(1);
 
    int maxim = sum[1];
 
    for ( int i = 1; i <= n; ++i )
        maxim = max ( maxim, sum[i] );
 
 
    fout << maxim;
 
    fout.close();
    return 0;
}
 
void Df(int x)
{
    s[x] = true;
    for ( IT it = G[x].begin(); it != G[x].end(); ++it )
        if ( !s[*it] )
        {
            Df(*it);
            if ( sum[*it] > 0 ) sum[x] += sum[*it];
        }
}
 
void Read()
{
    ifstream fin("asmax.in");
 
    fin >> n;
    G.resize(n + 1); sum.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        fin >> sum[i];
 
    int x, y;
    while ( fin >> x >> y )
    {
        G[x].push_back(y);
        G[y].push_back(x);
    }
 
    fin.close();
}
