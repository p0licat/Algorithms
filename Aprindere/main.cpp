// greedy, daca este posibil sa aprinzi lumina pe masura ce citesti 
// cele M linii atunci o faci
#include <iostream>
#include <fstream>
using namespace std;
#define DMAX 1005
 
ifstream fin("aprindere.in");
ofstream fout("aprindere.out");
 
int main()
{
    bool rooms[DMAX] = {0};
    int N, M;
    int cost = 0;
     
    fin >> N >> M;
     
    for (int i = 0; i < N; ++i)
        fin >> rooms[i];
     
    int c_room, c_time, c_switch, // at line i, current room, time cost
                        nr_sw;   // and current switch < nr_switches 
                         
    for (int i = 0; i < M; ++i)
    {
        fin >> c_room >> c_time; // read room and time cost
        fin >> nr_sw;       // read number of rooms affected
        if ( rooms[c_room] ) // if light is open
            for (int k = 0; k < nr_sw; ++k) // do nothing
                fin >> c_switch;          // but read the rest
        else // if ligth is closed
        {
            // turn on the switch
            for (int k = 0; k < nr_sw; ++k)
            {
                fin >> c_switch;
                rooms[c_switch] = !rooms[c_switch];
            }
            cost += c_time; // add current time to total cost
        }
    }
     
    fout << cost << '\n';
     
    fin.close();
    fout.close();
    return 0;
}
