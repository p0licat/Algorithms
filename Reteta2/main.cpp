#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
ifstream fin("reteta2.in");
ofstream fout("reteta2.out");
 
struct ingredient {
    string nume;
    int cantitate;
};
 
vector<ingredient> v;
int timp;
 
bool Lexi();
 
int main()
{
    char c;
    while ( !fin.eof() )
    {
        c = fin.get();
        if ( c == '(' )
            continue;
        if ( c == ')' )
        {
            int nr = 0;
 
            while ( fin.peek() == ' ' || isdigit(fin.peek()) )
            {
                c = fin.get();
                if ( c != ' ' )
                    nr = nr * 10 + c - '0';
            }
            timp += nr;
            continue;
        }
        if ( isalpha(c) )
        {
            string word;
            while ( isalpha(c) )
            {
                word += c;
                c = fin.get();
            }
            int nr = 0;
            while ( fin.peek() == ' ' || isdigit(fin.peek()) )
            {
                c = fin.get();
                if ( c != ' ' )
                    nr = nr * 10 + c - '0';
            }
            ingredient pushy;
            pushy.nume = word;
            pushy.cantitate = nr;
 
            bool gasit = false;
            for (unsigned int i = 0; i < v.size(); ++i)
                if ( v[i].nume == word )
                {
                    gasit = true;
                    v[i].cantitate += nr;
                }
            if ( !gasit )
                v.push_back(pushy);
        }
 
    }
 
 
 
    fout << timp << '\n';
 
    bool done = false;
    while ( !done )
    {
        done = true;
        for (unsigned int i = 0; i < v.size()-1; ++i)
            for (unsigned int j = i+1; j < v.size(); ++j)
                if ( v[i].nume > v[j].nume )
                {
                    swap(v[i], v[j]);
                    done = false;
                }
    }
 
    for (unsigned int i = 0; i < v.size(); ++i)
        fout << v[i].nume << ' ' << v[i].cantitate << '\n';
 
    fin.close();
    fout.close();
    return 0;
}
