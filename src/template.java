import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;


class Main{

  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
    BufferedReader r = new BufferedReader(new 
          InputStreamReader (System.in));


    //Lector Scanner --> sc.nextLine();
    //Lector BufferedReader --> r.readLine();
    //----------------------------------------------|
    //Para leer o escribir archivos si se requiere  |
    System.setIn(new FileInputStream("tree.in"));   |
    System.setOut(new PrintStream("tree.out"));     |
    //----------------------------------------------|

  }
}
