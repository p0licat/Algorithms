#include <iostream>
#include <fstream>
#include <utility>
#include <deque>
using namespace std;
typedef pair<int, int> Point;
#define DIM 1006
  
struct Terrain {
    int height;
    bool affected;
};
  
void Read();
int Lee();
void Debug_Write_Queue();
void Execute(int, int, int&);
bool Cond(const int&, const int&);
  
const int di[] = {0,1,0,-1},
          dj[] = {1,0,-1,0};
  
Terrain Matr[DIM][DIM];
int n, m, Size;
deque<Point> q;
  
int main()
{
    Read();
    ofstream fout("tsunami.out");
    fout << Lee();
    fout.close();
    return 0;
}
void Debug_Write_Queue()
{
    deque<Point>::iterator it;
    for (it = q.begin(); it != q.end(); ++it)
    {
        cout << it->first << ' ' << it->second << '\n';
    }
}
bool Cond(const int& ii,const int& jj)
{
    if ( ii < 0 || ii > n )
        return false;
    if ( jj < 0 || jj > m)
        return false;
    if ( Matr[ii][jj].affected == true )
        return false;
    if ( !Matr[ii][jj].height )
        return false;
    if ( Matr[ii][jj].height >= Size )
        return false;
    return true;
}
void Execute(int i, int j, int& NA)
{
    int ii, jj;
    for (int k = 0; k < 4; ++k)
    {
        ii = i + di[k];
        jj = j + dj[k];
        if ( Cond(ii, jj) )
        {
            Matr[ii][jj].affected = true;
            q.push_back(make_pair(ii, jj));
            NA++;
        }
    }
}
int Lee()
{
    int NA = 0;
    deque<Point>::iterator it;
    while ( !q.empty() )
    {
        it = q.begin();
        Execute(it->first, it->second, NA);
        q.pop_front();
    }
    return NA;
}
  
void Read()
{
    ifstream fin("tsunami.in");
    fin >> n >> m >> Size;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            fin >> Matr[i][j].height;
            Matr[i][j].affected = false;
        }
         
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if ( Matr[i][j].height == 0 )
                q.push_back(make_pair(i, j));
        }
  
    fin.close();
}
