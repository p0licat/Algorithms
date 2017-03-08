#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <deque>
#include <iomanip>
using namespace std;
 
typedef pair<int, int> PII;
 
ifstream fin("alee.in");
ofstream fout("alee.out");
 
void Read();
void Lee();
void Debug();
void Execute(int ii, int jj);
bool Condition(int x, int y);
 
int n; // latura
int trees; //nr copaci
int Map[178][178];
deque<PII> queue;
pair<int, int> IP, FP; // poz initiala si finala (portiile)
 
const char di[] = {0, 1, 0, -1},
           dj[] = {-1, 0, 1, 0};
 
 
int main()
{
    Read();
    Lee();
    fout << Map[FP.first][FP.second];
 
    return 0;
}
 
void Debug()
{
    cout << "n: " << n << '\n';
    cout << "trees: " << trees << '\n';
    cout << "IP, FP: " << IP.first << ' ' << IP.second << ' ' << FP.first << ' ' << FP.second;
    cout << '\n' << "Array: " << '\n';
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            if ( Map[i][j] != -1 )
                cout << Map[i][j] << setw(4);
            else
                cout << 'X' << setw(4);
        cout << '\n';
    }
}
 
bool Condition( int x, int y ) // verifica daca punctul din matrice respecta cerintele
{
    if ( Map[x][y] != 0 )
        return false;
    if ( x < 0 || y > n-1 || x > n-1 || y < 0 )
        return false;
    return true;
}
 
void Execute(int ii, int jj) // verifica vecinii si executa actiunile necesare pentru ei
{
    int i2, j2;
    for (int k = 0; k < 4; ++k)
    {
        i2 = di[k]; j2 = dj[k];
        if ( Condition( ii + i2, jj + j2 ) )
        {
            queue.push_back( make_pair(ii + i2, jj + j2) );
            Map[ ii + i2 ][ jj + j2 ] = Map[ii][jj] + 1;
        }
    }
}
 
void Lee()
{
    queue.push_back(make_pair(IP.first, IP.second));
    Map[IP.first][IP.second] = 1;
    deque<PII>::iterator it2;
    while ( !queue.empty() )
    {
        it2 = queue.begin();
        Execute(it2->first, it2->second);
        queue.pop_front();
    }
}
 
void Read()
{
    PII current;
    fin >> n >> trees;
    while ( trees-- )
    {
        fin >> current.first >> current.second;
        current.first -= 1; current.second -= 1; // scad 1 pt. a salva memorie, lucrez cu matrici indexate de la 0
        Map[current.first][current.second] = -1;
    }
    fin >> IP.first >> IP.second >> FP.first >> FP.second;
 
    //ajustez valorile pentru a functiona cu tablouri numerotate de la 0
    IP.first -= 1; IP.second -= 1; FP.first -= 1; FP.second -= 1;
}
