#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int, int> PII;
 
int i, k;
vector<PII> secv;
 
bool Merge()
{
    if (secv[k-1].second + 1 == secv[k].first)
    {
         secv[k-1].second = secv[k].second;
         --k;
         return true;
    }
    else
    if (secv[k].second + 1 == secv[k-1].first)
    {
        secv[k-1].first = secv[k].first;
        --k;
        return true;
    }
    return false;
}
 
int main()
{
    ifstream fin("reactii.in"); ofstream fout("reactii.out");
    int N, T;
    fin >> N >> T;
    secv.reserve(N + 1);
    secv.resize(N+1);
 
    int curent;
    for (; T; --T)
    {
        k = 0;
        for (i = 1; i <= N; ++i)
        {
            fin >> curent;
            ++k; secv[k].first = curent; secv[k].second = curent;
            while ( k > 1 && Merge() );
        }
        fout << (k == 1) << '\n';
    }
 
    fout.close();
    fin.close();
 
    return 0;
}
