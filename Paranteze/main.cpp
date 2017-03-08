#include <iostream>
#include <fstream>
#include <stack>
#include <utility>
using namespace std;
typedef pair<char, int> PCI;
 
ifstream fin("paranteze.in");
ofstream fout("paranteze.out");
 
char Opus(char c);
 
int n;
stack<PCI> stiva;
int s, smax;
 
int main()
{
    fin >> n;
    char c;
 
    for (int i = 0; i < n; ++i)
    {
        fin >> c;
        if ( c == '(' || c == '[' || c == '{' )
            stiva.push( make_pair(c, 0) );
        else
        {
            if ( !stiva.empty() && stiva.top().first == Opus(c)  )
            {
                int curs = stiva.top().second;
                stiva.pop();
                    if ( !stiva.empty() )
                    {
                        stiva.top().second += curs + 2;
                        smax = max (smax, stiva.top().second );
                    }
                    else
                    {
                        s += curs + 2;
                        smax = max (smax, s);
                    }
            }
            else
            {
                while ( !stiva.empty() )
                    stiva.pop();
                s = 0;
            }
        }
    }
    fout << smax << '\n';
 
    fin.close();
    fout.close();
    return 0;
}
 
char Opus(char c)
{
    if ( c == ')' )
        return '(';
    if ( c == ']' )
        return '[';
    if ( c == '}' )
        return '{';
    return '0';
}
