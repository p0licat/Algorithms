#include <fstream>
#include <algorithm>
using namespace std;
 
ifstream fin("furnici.in");
ofstream fout("furnici.out");
 
int main()
{
    int dim, n, maxim = 0;
 
    fin >> dim >> n;
 
    int nr; char dir;
 
    for (int i = 0; i < n; ++i)
    {
        fin >> nr >> dir;
        if ( dir == 'D' )
            maxim = max (maxim, dim - nr);
        else
            maxim = max ( maxim, nr );
    }
 
    fout << maxim << '\n';
 
    fin.close();
    fout.close();
 
    return 0;
}
