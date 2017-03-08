#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream fin("pescari.in");
ofstream fout("pescari.out");
 
int n, m, p, a[1005][1005];
const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1,},
          dj[] = {-1, 0 , 1, -1, 1, -1, 0 ,1};
struct element
{
    int linie, coloana;
};
element q1[1000025], q2[1000025] ;
int main()
{
    int st = 0, dr = -1, cnt = 0;
    fin>>n>>m>>p;
    for(int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            {
                fin>>a[i][j];
                if(a[i][j] == 1)
                   a[i][j] = 0, cnt++,  q1[cnt].linie = i, q1[cnt].coloana = j;
                if(a[i][j] == 2)
                    a[i][j] = -1;
            }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            if(a[i][j] == -1)
                for(int k = 0; k < 8; k++)
                {
                    int ii = i + di[k], jj = j + dj[k];
                    if(ii > 0 && ii <= n && jj > 0 && jj <= m && a[ii][jj] == 0)
                        {
                           dr++;
                            a[ii][jj] = 1;
                            q2[dr].linie = ii, q2[dr].coloana = jj;
 
                        }
                }
    }
    while(st <= dr)
    {
        int i = q2[st].linie, j = q2[st].coloana;
        for(int k = 0; k < 8 ; k++)
        {
            int ii = i + di[k], jj = j + dj[k];
            if(ii > 0 && ii <= n && jj > 0 && jj <= m && a[ii][jj] == 0)
                {
                    dr++;
                    q2[dr].linie = ii, q2[dr].coloana = jj;
                    a[ii][jj] = a[i][j] + 1;
                }
        }
        st++;
    }
 
    for(int i = 1; i <= p; i++)
        fout<<a[q1[i].linie][q1[i].coloana] << '\n';
return 0;
}
