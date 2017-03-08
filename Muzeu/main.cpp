#include <iostream>
#include <fstream>
#include <deque>
#include <iomanip>
#include <utility>
using namespace std;
#define DIM 251
typedef pair<int, int> PII;
 
bool Cond(const int&, const int&);
void Read();
void Lee();
void Write();
void Execute(const int&, const int&);
void Put(const char&, const int&, const int&);
 
int n;
int Matr[DIM][DIM];
deque<PII> q;
 
const char di[] = {0, 1, 0, -1},
           dj[] = {-1, 0, 1, 0};
 
int main()
{
    Read();
    Lee();
    Write();
 
    return 0;
}
bool Cond(const int& ii, const int& jj)
{
    if ( ii < 0 || jj < 0 )
        return false;
    if ( ii > n || jj > n )
        return false;
    if ( Matr[ii][jj] == -2 || Matr[ii][jj] >= 0 )
        return false;
    return true;
}
 
void Execute(const int& i, const int& j)
{
    int ii, jj;
    for (int k = 0; k < 4; ++k)
    {
        ii = i + di[k];
        jj = j + dj[k];
        if ( Cond(ii, jj) )
        {
            q.push_back( make_pair(ii, jj) );
            Matr[ii][jj] = Matr[i][j] + 1;
        }
    }
}
 
void Lee()
{
    deque<PII>::iterator it;
    while ( !q.empty() )
    {
        it = q.begin();
        Execute(it->first, it->second);
        q.pop_front();
    }
}
 
void Read()
{
    ifstream fin("muzeu.in");
    fin >> n;
    char curent;
    for (int i = 0; i < n; ++i)
    {
        fin.ignore();
        for (int j = 0; j < n; ++j)
        {
            curent = fin.get();
            Put(curent, i, j);
        }
    }
    fin.close();
}
 
void Put(const char& c, const int& i, const int& j)
{
    if ( c == '.' ) {
        Matr[i][j] = -1; return;
    }
    if ( c == '#' ){
        Matr[i][j] = -2; return;
    }
    if ( c == 'P' ) {
        Matr[i][j] = 0;
        q.push_back( make_pair(i, j) );
        return;
    }
}
 
void Write()
{
    ofstream fout("muzeu.out");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            fout << Matr[i][j] << ' ';
        fout << '\n';
    }
    fout << '\n';
    fout.close();
}
