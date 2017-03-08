#include <fstream>
#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;
 
#define INFINIT 0x3f3f3f3f
#define DIM 102
 
ifstream fin("rj.in");
ofstream fout("rj.out");
 
int R[DIM][DIM], J[DIM][DIM];
char s[DIM][DIM];
int n, m;
int Ri, Rj, Ji, Jj;
int iv, jv;
int minim = INT_MAX;
 
int di[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};
 
 
void Read();
void LeeR();
void LeeJ();
void Write();
void Writesol();
 
int main()
{
    Read();
    LeeR();
    LeeJ();
    Writesol();
 
    fin.close();
    fout.close();
    return 0;
}
 
void Read()
{
    fin >> n >> m;
 
    for ( int i = 0; i < n; ++i )
    {
        fin.get();
        for ( int j = 0; j < m; ++j )
        {
            s[i][j] = fin.get();
            R[i][j] = INFINIT;
            J[i][j] = INFINIT;
            if (s[i][j] == 'R')
            {
                Ri = i;
                Rj = j;
            }
            if (s[i][j] == 'J')
            {
                Ji = i;
                Jj = j;
            }
        }
 
    }
 
 
}
void LeeR()
{
    R[Ri][Rj] = 1;
    bool done;
    int c = 1;
    do
    {
        done = true;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                if (R[i][j] == c)
                {
                    for (int d = 0; d < 8; d++)
                    {
                        iv = i + di[d];
                        jv = j + dj[d];
                        if (R[iv][jv] == INFINIT && s[iv][jv] != 'X')
                        {
                            R[iv][jv] = c+1;
                            done = false;
                        }
                    }
                }
 
            }
        c++;
    } while (!done);
 
}
void LeeJ()
{
    J[Ji][Jj] = 1;
    bool done;
    int c = 1;
    do
    {
        done = true;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                if (J[i][j] == c)
                {
                    for (int d = 0; d < 8; d++)
                    {
                        iv = i + di[d];
                        jv = j + dj[d];
                        if (J[iv][jv] == INFINIT && s[iv][jv] != 'X')
                            J[iv][jv] = c+1;
                    }
                    done = false;
                }
            }
            c++;
    } while (!done);
 
}
 
void Write()
{
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        if (R[i][j] == INFINIT)
            fout << setw(4) <<"INF";
        else
            fout << setw(4) << R[i][j];
        fout << '\n';
    }
    fout << '\n';
 
    return;
}
 
void Writesol()
{
    int f, g;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (R[i][j] == J[i][j])
            {
                if (R[i][j] < minim)
                {
                    minim = R[i][j];
                    f = i;
                    g = j;
                }
            }
        }
 
    fout << minim << ' ' << f + 1 << ' ' << g + 1;
    return;
}
