#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;
 
ifstream fin("parantezare.in");
ofstream fout("parantezare.out");
 
string s;
int vect[100005];
int m, nrp;
stack<int> paranteze;
 
int main()
{
    getline(fin, s);
    fin>>m;
 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            paranteze.push(i);
        }
        if(s[i] == ')')
        {
            vect[paranteze.top()] = i;
            paranteze.pop();
        }
    }
     
    int q;
    for(int i = 0; i < m; i++)
    {
        fin >> q;
        fout << vect[q] << ' ';
    }
 
    return 0;
}
