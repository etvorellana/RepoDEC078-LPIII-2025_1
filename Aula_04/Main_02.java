public class Main_02 {
    public static void main(String[] args) {
        JogoDadosPrivate jogo = new JogoDadosPrivate();
        jogo.inicializa(10, 1, 6, 0);
        jogo.jogaOsDados();
        jogo.printJogo();
        jogo.qtVezes = 5;
        jogo.printJogo();
        jogo.qtVezes = 15;
        jogo.printJogo();

    }
}
