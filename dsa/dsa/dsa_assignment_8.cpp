
#include <iostream>
#include<string>
#define V 9
using namespace std;
class Dijkshtra_algo
{
  public:
    int graph[V][V];
    int nodes;
    string Citynm[V]={"Pune"," Aurangabad ","Beed","Latur"," Thane ","Mumbai"," Nashik"," Nanded"};
    void create_graph();
    int minimumdist(int[], bool[]);
    void display(int);
    int INT_MAX;
};

void Dijkshtra_algo ::create_graph()
{   cout<< " Enter Number of Cities you want : "<<endl;
   cin>>nodes;
    cout << " Enter the cost of adjacency matrix:"<<endl;
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cin >> graph[i][j];
        }
    }
}

int Dijkshtra_algo ::minimumdist(int dist[], bool visit[])
{


    int min = INT_MAX, index;

    for (int i = 0; i < nodes; i++)
    {
        if (visit[i] == false && dist[i] <= min)
        {
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void Dijkshtra_algo::display(int sr) 
{
    int dist[V];  
    bool visit[V]; 
    for (int i = 0; i < nodes; i++)
    {
        dist[i] = INT_MAX;
        visit[i] = false;
    }

    dist[sr] = 0;

    for (int i = 0; i < nodes; i++)
    {
        int m = minimumdist(dist, visit); 
        visit[m] = true;                
        for (int i = 0; i < nodes; i++)
        {
            if (!visit[i] && graph[m][i] && dist[m] != INT_MAX && dist[m] + graph[m][i] < dist[i])
                dist[i] = dist[m] + graph[m][i];
        }
    }
    cout << " Vertex\t\tDistance from source" << endl;
    for (int i = 0; i < nodes; i++)
    {                     
        cout << Citynm[i] << "\t\t\t" << dist[i] << endl;
    }
}

int main()
{
    Dijkshtra_algo d;
    d.create_graph();
    d.display(0);
    return 0;
}