package PacoteData;

public class ListaCompromissos {

    private Data[] lista;
    private int nCompromissos;

    public ListaCompromissos(int n) {
        lista = new Data[n+1];
        nCompromissos = 0;
    }

    public ListaCompromissos() {
        lista = new Data[11];
        nCompromissos = 0;
    }

    public boolean addCompromisso(Data d) 
    {
        if (nCompromissos == (lista.length - 1) || verificaCompromisso(d)) 
            return false;
        else{
            lista[nCompromissos] = d;
            nCompromissos++;
            return true;
        }
    }

    public boolean desmarcaCompromisso(Data d) {
        int i = locCompromisso(d);
        if (nCompromissos == 0 || i == nCompromissos) 
            return false;
        else {
            lista[i] = lista[nCompromissos - 1];
            nCompromissos--;
            return true;
        }
    }

    private int locCompromisso(Data d) {
        lista[nCompromissos] = d;
        int i = 0;
        while (lista[i].diferenteDe(d)) 
            i++;
        return i;
    }

    public boolean verificaCompromisso(Data d) {
        return locCompromisso(d) != nCompromissos;
    }

    public void listaCompromissos(){
        for (int i = 0; i < nCompromissos; i++) {
            System.out.println(lista[i]);
            //lista[i].mostraData();
        }
    }
    
}
