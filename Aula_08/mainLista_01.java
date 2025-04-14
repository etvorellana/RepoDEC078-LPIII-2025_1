import PacoteData.*;

public class mainLista_01 {
    public static void main(String[] args) {
        // Cria uma lista de compromissos com capacidade para 5 compromissos
        PacoteData.ListaCompromissos lista = new PacoteData.ListaCompromissos(5);
        
        // Adiciona alguns compromissos
        boolean ok;
        ok = lista.addCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1972));
        isOk(ok);
        //tentando adicionar uma data que já existe
        ok = lista.addCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1972));
        isOk(ok);
        //tentando adicionar uma data uma nova data (mesmo dia e mes, ano diferente)
        ok = lista.addCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1973));
        isOk(ok);
        //tentando adicionar uma data nova (mesmo dia e ano, mes diferente)
        ok = lista.addCompromisso(new PacoteData.Data((byte)1,(byte)3,(short)1972));
        isOk(ok);
        //tentando adicionar uma data nova (mesmo mes e ano, dia diferente)
        ok = lista.addCompromisso(new PacoteData.Data((byte)3,(byte)1,(short)1972));
        isOk(ok);
        
        lista.listaCompromissos();
        // verifica se a data 1/1/1972 está na lista
        ok = lista.verificaCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1972));
        if (ok) {
            System.out.println("Compromisso 1/1/1972 está na lista.");
        } else {
            System.out.println("Compromisso 1/1/1972 não está na lista.");
        }
        // verifica se a data 1/1/1973 está na lista
        ok = lista.verificaCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1970));
        if (ok) {
            System.out.println("Compromisso 1/1/1970 está na lista.");
        } else {
            System.out.println("Compromisso 1/1/1970 não está na lista.");
        }

        // desmarca um compromisso
        ok = lista.desmarcaCompromisso(new PacoteData.Data((byte)1,(byte)1,(short)1972));
        if (ok) {
            System.out.println("Compromisso 1/1/1972 desmarcado.");
        } else {
            System.out.println("Compromisso 1/1/1972 não desmarcado.");
        }


        // Lista os compromissos
        lista.listaCompromissos();
    }

    public static void isOk(boolean ok) {
        if (ok) {
            System.out.println("Compromisso adicionado com sucesso.");
        } else {
            System.out.println("Compromisso não adicionado.");
        }
    }
}
