public class Main_03 {
    public static void main(String[] args) {
        JogoDados jogo = new JogoDados(10, 1, 6, 1234);
        //jogo.inicializa(10, 1, 6, 0);
        jogo.jogaOsDados();
        jogo.printJogo();
        //jogo.qtVezes = 5;
        jogo.jogaOsDados();
        jogo.printJogo();
        //jogo.qtVezes = 15;
        jogo.jogaOsDados();
        jogo.printJogo();

    }
}
