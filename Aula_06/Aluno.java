public class Aluno {
    private int numMatricula;
    private static int id = 1;
    private static int ano = 0;
    private static int[] ids = {0,0,0,0,0,0,0,0,0,}

    public Aluno(int numMatricula) {
        //this.numMatricula = numMatricula;
        if (ano == 0)
            ano = numMatricula/10;

        if(numMatricula/10 > ano) {
            ano = numMatricula/10;
            id = 1;
        }
        if(numMatricula/10 < ano) {
            numMatricula = ano * 10 + numMatricula%10;
        }

        numMatricula *= 10000;
        numMatricula += id++;
        this.numMatricula = numMatricula;
    }

    public int getNumMatricula() {
        return numMatricula;
    }

}
