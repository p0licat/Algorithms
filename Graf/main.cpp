#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
ifstream fin("graf.in");
ofstream fout("graf.out");
 
void Read();
void BFS1(int node);
void BFS2(int node);
 
int n, m, x, y;
vector<vector<int> > G;
vector<bool> V;
vector<int> Dist1;
vector<int> Dist2;
queue<int> Q;
vector<vector<int> > SOL;
 
int main()
{
    Read();
    BFS1(x);
 
    V.assign(n+1, false);
 
    BFS2(y);
 
    vector<int> fsol;
 
    for (int i = 1; i <= n; ++i)
        if ( Dist1[i] + Dist2[i] == Dist1[y] )
            SOL[Dist1[i]].push_back(i); // push into sol valid node
 
    for (int i = 0; i < n; ++i)
        if ( SOL[i].size() == 1 ) // if node is unique
            fsol.push_back(SOL[i][0]);
 
    sort(fsol.begin(), fsol.end());
 
    fout << fsol.size() << '\n';
    for (unsigned int i = 0; i < fsol.size(); ++i)
        fout << fsol[i] << ' ';
    fout << '\n';
 
    fin.close();
    fout.close();
    return 0;
}
 
void BFS1(int node)
{
    Q.push(node);
    Dist1[node] = 0; V[node] = true;
 
    vector<int>::iterator it;
    while ( !Q.empty() )
    {
        int curr = Q.front(); Q.pop();
        for (it = G[curr].begin(); it != G[curr].end(); ++it)
            if ( !V[*it] )
            {
                V[*it] = true;
                Dist1[*it] = Dist1[curr] + 1;
                Q.push(*it);
            }
    }
}
 
void BFS2(int node)
{
    Q.push(node);
    V[node] = true; Dist2[node] = 0;
 
    vector<int>::iterator it;
    while ( !Q.empty() )
    {
        int curr = Q.front(); Q.pop();
        for (it = G[curr].begin(); it != G[curr].end(); ++it)
            if ( !V[*it] )
            {
                V[*it] = true;
                Dist2[*it] = Dist2[curr] + 1;
                Q.push(*it);
            }
    }
}
 
void Read()
{
    fin >> n >> m >> x >> y;
    int X, Y;
 
    G.resize(n+1);
    V.resize(n+1);
    SOL.resize(n+1);
 
    for (int i = 0; i <= n + 1; ++i)
    {
        Dist1.push_back(-1);
        Dist2.push_back(-1);
    }
 
    for (int i = 1; i <= m; ++i)
    {
        fin >> X >> Y;
        G[X].push_back(Y);
        G[Y].push_back(X);
    }
}
