package PacoteData;

public class ListaCompromissosOrdenada {

    private Data[] lista;
    private int nCompromissos;

    public ListaCompromissosOrdenada(int n) {
        lista = new Data[n+1];
        nCompromissos = 0;
    }

    public boolean addCompromisso(Data d) 
    {
        int i = locCompromisso(d);
        if (nCompromissos == (lista.length + 1) || (i < nCompromissos && lista[i].igualA(d))) 
            return false;
        else{
            for (int j = nCompromissos; j > i; j--) {
                lista[j] = lista[j - 1];
            }
            lista[i] = d;
            nCompromissos++;
            return true;
        }
    }

    public boolean desmarcaCompromisso(Data d) {
        int i = locCompromisso(d);
        if (nCompromissos == 0 || (i < nCompromissos && lista[i].diferenteDe(d))) 
            return false;
        else {
            for (int j = i; j < nCompromissos - 1; j++) {
                lista[j] = lista[j + 1];
            }
            lista[nCompromissos - 1] = null;
            nCompromissos--;
            return true;
        }
    }

    private int locCompromisso(Data d) {
        lista[nCompromissos] = d;
        int i = 0;
        while (lista[i].anterior(d)) 
            i++;
        return i;
    }

    private int locCompromisso_(Data d) {
        int i = 0;
        int j = nCompromissos - 1;
        while (i <= j) {
            int m = (i + j) / 2;
            if (lista[m].anterior(d)) {
                i = m + 1;
            }else if (lista[m].igualA(d)) {
                return m;
            }else {
                j = m - 1;
            }
        }
        return i;
    }

    public boolean verificaCompromisso(Data d) {
        int i = locCompromisso(d);
        return lista[i].igualA(d);
    }

    public void listaCompromissos(){
        for (int i = 0; i < nCompromissos; i++) {
            System.out.println(lista[i]);
        }
    }
    
}


