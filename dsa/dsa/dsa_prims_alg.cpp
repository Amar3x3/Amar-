#include <iostream>
#define V 9
using namespace std;
class Prim
{
  public:
    int  nodes;
    int edge; // variable for edges
    int G[V][V];//multidimensional array
    int visit[V];
    int min_cost = 0;
    int x; //  rows
    int y; //  columns
    int INT_MAX;
    Prim();
    void create_graph();
    void print_prim();
    void display();
    string Dept[6]={" IT "," MECH "," CIVIL"," CS "," ENTC "," ECE "};
};

Prim ::Prim()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            G[i][j] = 0;
        }
    }
}

void Prim ::create_graph()
{
    cout <<endl<< "Execution of Prim's Algorithm"<<endl;
    cout << "Enter the number of vertices :"<<endl;
    cin >> nodes;
    cout << "Enter the cost adjacency matrix : "<<endl;
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cin >> G[i][j];
        }
    }

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (G[i][j] == 0)
                G[i][j] = INT_MAX;
        }
    }
}

void Prim::display()
{
    for (int i = 0; i < nodes; i++)
    {
        visit[i] = false;
    }

    edge = 0;
    visit[0] = true;

    int x; 
    int y; 
    
    cout << " \nEdge "
         << " : "
         << " Weight ";
    cout << endl;
    while (edge < nodes - 1)
    {         
        int min = INT_MAX;
        x = 0;
        y = 0;

        for (int i = 0; i < nodes; i++)
        {
            if (visit[i])
            {
                for (int j = 0; j < nodes; j++)
                {
                    if (!visit[j] && G[i][j])
                    { 
                        if (min > G[i][j])
                        {
                            min = G[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        cout << endl;
        min_cost += G[x][y];
        visit[y] = true;
        edge++;
    }
    for(int x=0;x<6;x++)
    {
        cout <<"(" <<Dept[x ]<< " ---> " << Dept[y ] <<")"<< " :  " << G[x][y];    
    }
    cout << "\nMinimum cost = " << min_cost;
}
int main(int argc, char *argv[])
{
    Prim p;
    p.create_graph();
    p.display();
    return 0;
}