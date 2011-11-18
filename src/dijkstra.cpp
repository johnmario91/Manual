struct edge{
    int to, weight;
    edge(){}
    edge(int t,int w) :to(t),weight(w){}
    bool operator < (const edge &that) const{
       return weight > that.weight;
    }
};

const int MAXNODES = 10002;
vector <edge> g[MAXNODES];
int d[MAXNODES], p[MAXNODES];

void Dijkstra(int s,int t,int n)
{
   for (int i = 0; i<=n;++i){
     d[i] = INT_MAX;
     p[i] = -1;
   }
   d[s] = 0;
   priority_queue <edge> q;
   q.push(edge(s,0));
   while(q.size()){
       int node = q.top().to;
       int dist = q.top().weight;
       q.pop();		
       if (dist > d[node]) continue;
       if (node == t) break;
       for (int i = 0; i<g[node].size();++i){
          int to = g[node][i].to;
          int w_extra = g[node][i].weight;
          if (dist + w_extra < d[to]){
            d[to] = dist + w_extra;
            p[to] = node;
            q.push(edge(to,d[to]));
          }
       }
   }
}
