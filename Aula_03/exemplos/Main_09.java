import java.util.Scanner;

public class Main_09 {
    public static void main(String[] args) {
        System.out.println("Trabalhando com arrays unidimensionais\n");
        int jogo[] = new int[10];
        System.out.println("Simulando 10 lançamentos de um dado:\n");
        Dados_01.jogaOsDados(jogo, 1, 6, 0);
        Dados_01.printJogo(jogo);
        System.out.println("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
        long semente;
        System.out.println("Entre com a semente para gerar uma nova sequencia: ");
        Scanner sc = new Scanner(System.in);
        semente = sc.nextLong();
        Dados_01.jogaOsDados(jogo, 1, 6, semente);
        Dados_01.printJogo(jogo); 
        System.out.println("Sementes diferentes irão gerar resultados diferentes!\n");
        System.out.println("A mesma semente gera o mesmo resultado!\n");
        System.out.println("Escolhendo a semente de forma automática\n");
        Dados_01.jogaOsDados(jogo, 1, 6, -1);
        Dados_01.printJogo(jogo);
        System.out.println("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
        sc.close();
    }
}

/* 
Compilando
$ javac Main_06.java
Executando
$ java Main_06
Saída
>
*/