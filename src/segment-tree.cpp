int A[10]; // aqui se guarda el arbol sobre el q se va a operar
int M[10]; // aqui queda el RMQ dependiendo de la 
//busqueda mm tmb queda el segment tree

void initialize( int node, int b, int e ){
     if (b == e) M[node] = b;
     else {
        initialize(2 * node, b, (b + e) / 2 );
        initialize(2 * node + 1, (b + e) / 2 + 1, e );

        if (A[M[2 * node]] <= A[M[2 * node + 1]]) M[node] = M[2 * node];
        else M[node] = M[2 * node + 1];
     }
}

int query(int node, int b, int e, int i, int j){
      int p1, p2;
      if (i > e || j < b) return -1;
      if (b >= i && e <= j) return M[node];

      p1 = query(2 * node, b, (b + e) / 2, i, j);
      p2 = query(2 * node + 1, (b + e) / 2 + 1, e, i, j);

      if (p1 == -1) return M[node] = p2;
      if (p2 == -1) return M[node] = p1;
      if (A[p1] <= A[p2]) return M[node] = p1;
      return M[node] = p2;
}

// Esta entrada es un ejemplo con nueve valores en 
//la tabla de entrada y haciendo query de 5 a 7

int main(){
  memset( M, -1, sizeof(M) );
  A[0] = 2;
  A[1] = 4;
  A[2] = 3;
  A[3] = 1;
  A[4] = 6;
  A[5] = 7;
  A[6] = 8;
  A[7] = 9;
  A[8] = 1;
  A[9] = 7;
  initialize( 1, 0, 9 );
    for ( int a = 0; a < 26; ++a ) {
        cout << M[a] << " ";
    }
    cout << endl;
    cout << query( 1, 0, 9, 5 , 7 ) << endl;
  return 0;
}

