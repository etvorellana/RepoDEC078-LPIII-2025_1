package PacoteData;

/**
 * Classe de dados para a versão 1 do projeto.
 * 
 * @version 1.0
 */


public class DataV4 {

    // Encapsulamento public
    private byte dia;
    private byte mes;
    private short ano;

     
    public DataV4() {
        dia = 1;
        mes = 1;
        ano = 1970;
    }

    public DataV4(DataV4 outraData) {
        dia = outraData.dia;
        mes = outraData.mes;
        ano = outraData.ano;
    }

    public DataV4(DataV4 outraData, int dias) {
        dia = outraData.dia;
        mes = outraData.mes;
        ano = outraData.ano;
        for (int i = 0; i < dias; i++) {
            dia++;
            if (!dataValida(dia, mes, ano)) {
                dia = 1;
                mes++;
                if (!dataValida(dia, mes, ano)) {
                    mes = 1;
                    ano++;
                }
            }
        }
    }

    public DataV4(byte d, byte m, short a) {
        if (dataValida(d, m, a)) {
            dia = d;
            mes = m;
            ano = a;
        } else {
            dia = 1;
            mes = 1;
            ano = 1970;
        }
    }
     
    public boolean iniData(byte d, byte m, short a) {
        if (!dataValida(d, m, a)) {
            return false;
        }
        dia = d;
        mes = m;
        ano = a;
        return true;
    }

    public static boolean dataValida(byte d, byte m, short a) 
    {
        byte diasMes[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

        if (a < 0) {
            return false;
        }

        if (m < 1 || m > 12) {
            return false;
        }

        if (d < 1 || d > diasMes[m]) {
            return false;
        }

        // ano bisexto
        if (m == 2 && d == 29) {
            if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
                return true;
            } else {
                return false;
            }
        }
        return true;
    }  

    public void mostraData() {
        System.out.println(dia + "/" + mes + "/" + ano);
    }

    public byte getDia() {
        return dia;
    }

    public byte getMes() {
        return mes;
    }

    public short getAno() {
        return ano;
    }

    public boolean setDia(byte d) {
        if (dataValida(d, mes, ano)) {
            dia = d;
            return true;
        }else {
            return false;
        }
    }

    public boolean setMes(byte m) {
        if (dataValida(dia, m, ano)) {
            mes = m;
            return true;
        }else{
            return false;
        }
    }

    public boolean setAno(short a) {
        if (dataValida(dia, mes, a)) {
            ano = a;
            return true;
        }else{
            return false;
        }   
    }
}
