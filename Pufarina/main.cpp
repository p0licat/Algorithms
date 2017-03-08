#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
 
ifstream fin("pufarina.in");
ofstream fout("pufarina.out");
 
const int ct = 100000;
const int pop = 50000;
 
int T, n;
vector<int> cand;
 
void Read();
int ParseNum();
 
//DIVIZORI
int GCD();
int Cmmdc();
int gcdr();
//DIVIZORI
 
int main()
{
    Read();
 
    fin.close();
    fout.close();
    return 0;
}
 
int Cmmdc(int a, int b)
{
    if ( a == 0 ) return a;
    if ( b == 0 ) return b;
 
    while ( a != b )
    {
        if ( a > b )
            a -= b;
        if ( b > a )
            b -= a;
    }
 
    if ( a != 1 ) return a; // a = b
        else return 1;
}
 
int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}
 
int GCD()
{
    int gcd = cand[0];
 
    for (unsigned int i = 1; i < cand.size(); ++i)
        gcd = gcdr(gcd, cand[i]);
 
    return gcd;
}
 
int ParseNum()
{
    int number = 0;
    char c = 1;
 
    while ( c != '.' )
    {
        c = fin.get();
        if ( c == '.' ) continue;
        number = ( number * 10 ) + c - '0';
    }
 
    for (int i = 0; i < 3; ++i)
        c = fin.get(), number = ( number * 10 ) + c - '0';
 
    fin.get(); // reads space
    return number;
}
 
void Read()
{
    fin >> T;
    for (int i = 0; i < T; ++i)
    {
        int nrc = 0; cand.clear();
        fin >> n; fin.get();
        while ( nrc < n )
        {
            int num = ParseNum();
            cand.push_back(num);
            nrc++; continue;
        } // READS CANDIDATES
        int gcd = GCD();
        if ( ct / gcd > pop )
            fout << "ALEGERI FRAUDATE\n";
        else
            fout << ct / gcd << '\n';
    }
}
