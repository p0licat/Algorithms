#include <fstream>
#include <string>
#include <iostream>
#include <deque>
using namespace std;
 
ifstream fin("egalitati.in");
ofstream fout("egalitati.out");
 
deque<bool> st;
 
bool Check();
void Skip();
 
int main()
{
 
    char c = 1;
 
    while ( c != 0 )
    {
        fin >> c;
 
        if ( c == '.' )
        {
            fout << Check() << '\n';
            break;
        }
 
        if ( c == '(' )
            st.push_back(true);
 
        if ( c == ')' && !st.empty())
        {
            st.pop_back();
        }
        else
        if ( c == ')' && st.empty() )
        {
            st.clear();
            while ( c != ';' && c != '.' )
                fin >> c;
            fout << '0' << '\n';
            if ( c == '.' )
                return 0;
            continue;
        }
 
        if ( c == '=' )
        {
            if ( st.empty() )
                continue;
        }
        else
        if ( st.size() && c == '=' )
        {
            while ( c != ';' && c != '.' )
                fin >> c;
            fout << '\0' << '\n';
            continue;
        }
 
        if ( c == ';' )
            fout << Check() << '\n';
    }
 
    fin.close();
    fout.close();
    return 0;
}
 
bool Check()
{
    if ( !st.empty() )
    {
        st.clear();
        return false;
    }
 
    return true;
}
