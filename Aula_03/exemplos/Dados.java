package exemplos;
import java.util.Random;

public class Dados {
 
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

    static void printJogo(int jogo[])
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

