import java.util.Random;

/**
 * JogoDadosPublic
 * Classe para armazenar os dados de um jogo de dados.
 * Esta classe demonstra o comportamento de atributos públicos.
 */
public class JogoDadosPrivate {
    private int[] jogo; // números sorteados
    private int qtVezes; // quantidade de sorteios
    private int min; // valor inicial do intervalo
    private int tam; // tamanho do intervalo
    private long semente; // semente para o gerador de números aleatórios

    
    /** 
     * printJogo
     * Imprime o jogo.
    */
    public void printJogo() {
        System.out.print("( ");
        for (int i = 0; i < qtVezes; i++) {
            System.out.print(jogo[i]);
            if (i < qtVezes - 1)
                System.out.print(", ");
            else
                System.out.println(")");
        }
    }

    /**
    * jogaOsDados
    * Sorteia os números do jogo.
    */
    public void jogaOsDados() {
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

    /**
     * inicializa
     * Inicializa os atributos da classe.
     * 
     * @param qtVezes quantidade de sorteios
     * @param min     valor inicial do intervalo
     * @param tam     tamanho do intervalo
     * @param semente semente para o gerador de números aleatórios
     */
    public void inicializa(int qtVezes, int min, int tam, long semente) {
        this.qtVezes = qtVezes;
        this.min = min;
        this.tam = tam;
        this.semente = semente;
        this.jogo = new int[qtVezes];
    }

}
