import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner lectura = new Scanner(System.in);
        int coordenada = lectura.nextInt(), cont = 0;
        while(coordenada > 0){
            cont++;
            coordenada-=5;
        }
        System.out.println(cont);
    }
    
}
