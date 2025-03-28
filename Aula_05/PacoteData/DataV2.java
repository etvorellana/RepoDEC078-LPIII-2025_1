package PacoteData;

/**
 * Classe de dados para a versão 1 do projeto.
 * 
 * @version 1.0
 */


public class DataV2 {

    // Encapsulamento public
    private byte dia;
    private byte mes;
    private short ano;
    
    public boolean iniData(byte d, byte m, short a) {
        if (d < 1 || d > 31 || m < 1 || m > 12 || a < 0) {
            return false;
        }
        dia = d;
        mes = m;
        ano = a;
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

    public void setDia(byte d) {
        if (d >= 1 && d <= 31) {
            dia = d;
        }
    }

    public void setMes(byte m) {
        if (m >= 1 && m <= 12) {
            mes = m;
        }
    }

    public void setAno(short a) {
        if (a >= 0) {
            ano = a;
        }
    }
}
