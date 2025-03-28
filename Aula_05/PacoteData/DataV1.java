package PacoteData;

/**
 * Classe de dados para a versão 1 do projeto.
 * 
 * @version 1.0
 */


public class DataV1 {

    // Encapsulamento public
    public byte dia;
    public byte mes;
    public short ano;
    
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
}
