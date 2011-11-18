if (sscanf(s.c_str(), "%d %d", &r1, &r2) == 2) 
// lee 2 numeros en caso de que sea 1 va al else
//hay que tener en cuenta q "s" es un string

if (cin.peek()!='\n') cin >> r2; 
// si hay algo en esa linea que no sea 
//\n lo toma y lo guarda en r2

//para leer de un buffer o algo asi
char line[200010];
gets(line);
sscanf(line, "%d", &n);

getline(cin, s);  
// lee la linea y la inserta en el string s
getline(cin, s);  
// tener siempre en cuenta que se usa doble getline para
// omitir el salto y solo tomar la informacion que necesitamos

