#include <fstream>
#include <algorithm>
#include <climits>
using namespace std;
 
ifstream fin("galagie.in");
ofstream fout("galagie.out");
 
const long long MOD = 1000000007, DIM = 100001;
int n;
long long int sum;
long long a[DIM];
long long int s[DIM];
 
int main()
{
    fin >> n;
    for ( int i = 1; i <= n; i++ )
        fin >> a[i];
    sort(a + 1, a + n + 1);
    for ( int i = 1; i <= n; i++ )
        s[i] = s[i - 1] + a[i];
    for ( int i = 2; i <= n; i++ )
        sum = (sum + 2 * ((i - 1) * a[i] - s[i - 1] ));
    fout << sum % MOD;
    return 0;
}
