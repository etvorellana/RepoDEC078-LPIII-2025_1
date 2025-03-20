
import java.util.Random;
import java.util.Scanner;

public class Main_08 {
 
    public static void main(String[] args) {
        System.out.println("Trabalhando com arrays unidimensionais\n");
        int jogo[] = new int[10];
        System.out.println("Simulando 10 lançamentos de um dado:\n");
        jogaOsDados(jogo, 1, 6, 0);
        printJogo(jogo);
        System.out.println("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
        long semente;
        System.out.println("Entre com a semente para gerar uma nova sequencia: ");
        Scanner sc = new Scanner(System.in);
        semente = sc.nextLong();
        jogaOsDados(jogo, 1, 6, semente);
        printJogo(jogo); 
        System.out.println("Sementes diferentes irão gerar resultados diferentes!\n");
        System.out.println("A mesma semente gera o mesmo resultado!\n");
        System.out.println("Escolhendo a semente de forma automática\n");
        jogaOsDados(jogo, 1, 6, -1);
        printJogo(jogo);
        System.out.println("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
        sc.close();
    }

    public static void jogaOsDados(int jogo[], int min, int tam, long semente)
    {
        int qtVezes = jogo.length;
        Random rand;
        if (semente > 0)
            rand = new Random(semente);
        else if (semente < 0)
            rand = new Random(System.currentTimeMillis());
        else
            rand = new Random(); 
        for (int i = 0; i < qtVezes; i++)
        {
            jogo[i] = min + rand.nextInt(tam);
        }
    }

    public static void printJogo(int jogo[])
    {
        int qtVezes = jogo.length;
        System.out.print("( ");
        for (int i = 0; i < qtVezes; i++)
        {
            System.out.print(jogo[i]);
            if (i < qtVezes-1)
                System.out.print(", ");
            else
                System.out.println(")");
        }
    }
    
}

/* 
Compilando
$ javac Main_08.java
Executando
$ java Main_08
Saída
> 
*/