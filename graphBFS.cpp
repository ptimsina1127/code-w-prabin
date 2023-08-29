#include <iostream>
#include <vector>

using namespace std;

class Graph{
    private:
    int numNodes;
    vector <vector <int>> vect1;

    public:
    Graph()
    {

    }

    Graph(int noofNodes ){
        numNodes = noofNodes;
        for (int i = 0 ; i < noofNodes;++i){
            vector <int> temp_vector;
            for (int j = 0; j < noofNodes; ++j){
                temp_vector.push_back(0);
            }
            
            vect1.push_back(temp_vector);
        }
    }

void addEdge(int x, int y){
    int NoOfNodes;
    vect1[x-1][y-1] = 1;
    vect1[y-1][x-1] = 1;
}

void printGraph(){
    for (int i = 0 ; i < numNodes; ++i ){
        for (int j = 0 ; j < numNodes ; ++j){
            cout<< vect1[i][j]<<" ";
        }
        cout << endl;
    }
}

};



int main(){

    Graph graph1(5);
    graph1.addEdge(4,5);
    graph1.addEdge(1,3);
    graph1.addEdge(5,2);
    graph1.addEdge(1,5);
    graph1.printGraph();
    
    return 0;

}


