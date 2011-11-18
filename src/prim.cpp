struct edge{
  double to, weight;
  edge() { }
  edge ( int t ,double w ) : to(t), weight(w){}
  bool operator < ( const edge &that ) const {
    return weight > that.weight;
  }
};

struct pos{
  double x, y;
  pos() { }
  pos( double pt ,double pw ) : x(pt), y(pw){}
};

int n, d;
double x, y, result, r, r1, r2;
double prim( vector<edge> graph[], int maxNodes );

int main(){
  while( scanf("%d",&d) != EOF ){

    vector<pos> nodes; // pnts "x" y "y" de cada nodo leido
    for( int it = 0; it<d; ++it ){
      cin >> x >> y;
      nodes.push_back( pos( x, y ) );
    }

    vector<edge> graph[ d ];
    for( int i = 0; i<d; ++i ){
      for( int a = 0; a<d; ++a ){
  if( i==a ) continue;
  r1 = pow ( (nodes[ i ].x - nodes[ a ].x ) , 2) ;
  r2 = pow ( (nodes[ i ].y - nodes[ a ].y ) , 2) ;
  r = r1 + r2;
  graph[ i ].push_back( edge( a, sqrt(r) )  );
      }
    }

    printf( "%.2f\n",  prim( graph, d ) );
    //tales( graph, d );
  }
  return 0;
}

double prim( vector<edge> graph[], int maxNodes ){

  double total = 0.0;
  priority_queue<edge> q;
  q.push( edge( 0, 0.0 ) );
  set<int> visited;

  while( q.size() ){
    int node = q.top().to;
    double weight1 = q.top().weight;
    q.pop();
    if( visited.count(node) ) continue;
    visited.insert(node);
    total += weight1;
    for( int i = 0; i<graph[node].size(); ++i ){
      if( visited.count( graph[node][i].to == 0 ) ){
  q.push( graph[node][i] );
      }
    }
  }
  return total;
}
