#include<bits/stdc++.h>
using namespace std;
class graph{
    map<int, vector<int>> adj;
    public:
        void createGraph(int node1, int node2, bool direction){
            adj[node1].push_back(node2);
            if(!direction)
                adj[node2].push_back(node1);
        }
        void printGraph(){
            for(auto i:adj){
                cout<<i.first<<" -> ";
                for(auto j:i.second){
                    cout<<j<<"  ";
                }
                cout<<endl;
            }
        }
};
int main(){
    graph p;
    p.createGraph(1,2,1);
    p.createGraph(3,2,1);
    p.createGraph(3,4,1);
    p.createGraph(1,4,1);
    p.printGraph();
}