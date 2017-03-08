#include <iostream>
#include <fstream>
#include <deque>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
 
struct pepe {
    int xi, yi, xf, yf;
 
    pepe(int _xi, int _yi, int _xf, int _yf)
    {
        xi = _xi; yi = _yi; xf = _xf; yf = _yf;
    }
};
 
void Read();
void Back(int nrnem);
void Write();
void WriteMap();
void WriteVec();
void WriteVecNem();
 
int Harta[23][23];
int n, m, nrnem;
bool done = false;
 
int di[] = {0, 1, 0, -1},
    dj[] = {-1, 0, 1, 0};
 
deque<pepe> lupte;
vector<PII> nem;
 
int main()
{
    Read();
    Back(nrnem);
 
 
    return 0;
}
 
void Write()
{
    ofstream fout("immortal.out");
 
    deque<pepe>::iterator it;
 
    for (it = lupte.begin(); it != lupte.end(); ++it)
        fout << it->xi << ' ' << it->yi << ' ' << it->xf << ' ' << it->yf << '\n';
 
    fout.close();
}
 
void Back(int nrnem)
{
    if ( nrnem == 1 )
    {
        Write();
        done = true;
    }
 
    if ( !done )
        for (unsigned int nw = 0; nw < nem.size(); ++nw)
            if ( nem[nw].first != -1 && nem[nw].second != -1 )
                for (int k = 0; k < 4; ++k)
                {
                    int i = nem[nw].first, j = nem[nw].second,
                        ii = i + di[k],
                        jj = j + dj[k],
                        is = i + di[k] * 2,
                        js = j + dj[k] * 2;
 
                    if ( is > 0 && is <= n && js > 0 && js <= m )
                        if ( Harta[ii][jj] && !Harta[is][js] ) // daca e in matrice si exista vecin nem.
                        {
                            int nrdead = Harta[ii][jj] - 1;
                            int nrkiller = Harta[i][j];
 
                            // H[i][j] -> H[is][js]
                            Harta[ii][jj] = 0;
                            Harta[is][js] = nrkiller;
                            Harta[i][j] = 0;
 
                            // update nem
                            nem[nrkiller-1].first = is, nem[nrkiller-1].second = js;
                            nem[nrdead].first = -1;
                            nem[nrdead].second = -1;
 
                            pepe pushy(i, j, is, js);
                            lupte.push_back(pushy);
 
                            Back(nrnem-1);
                            if ( done ) return;
 
                            //if program gets here, solution is incorrect
 
                            // remove incorrect move
                            lupte.pop_back();
 
                            // undo changes to nem
                            nem[nrkiller-1].first = i, nem[nrkiller-1].second = j;
                            nem[nrdead].first = ii;
                            nem[nrdead].second = jj;
 
                            // undo changes to array
                            Harta[ii][jj] = nrdead+1;
                            Harta[is][js] = 0;
                            Harta[i][j] = nrkiller;
                        }
                }
}
 
void Read()
{
    ifstream fin("immortal.in");
 
    fin >> n >> m >> nrnem;
    nem.resize(nrnem);
 
    int x, y;
    for (int i = 0; i < nrnem; ++i)
    {
        fin >> x >> y;
        Harta[x][y] = i+1;
        nem[i].first = x, nem[i].second = y;
    }
 
    fin.close();
}
