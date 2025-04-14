package PacoteData;

/**
 * Classe de dados para a versão 1 do projeto.
 * 
 * @version 1.0
 */


public class Data {

    // Encapsulamento public
    private byte dia;
    private byte mes;
    private short ano;

     
    public Data() {
        dia = 1;
        mes = 1;
        ano = 1970;
    }

    public Data(Data outraData) {
        dia = outraData.dia;
        mes = outraData.mes;
        ano = outraData.ano;
    }

    public Data(Data outraData, int dias) {
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

    public Data(byte dia, byte mes, short ano) {
        this();
        if (dataValida(dia, mes, ano)) {
            this.dia = dia;
            this.mes = mes;
            this.ano = ano;
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
        byte diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        if (a < 0) {
            return false;
        }

        if (m < 1 || m > 12) {
            return false;
        }

        if (d < 1 || d > diasMes[m-1]) {
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

    public boolean igualA(Data outraData) 
    {
        if (outraData == null)
            return false;
        return outraData.dia == this.dia && outraData.mes == this.mes && outraData.ano == this.ano;
    }

    public static boolean igualA(Data data1, Data data2) 
    {
        if (data1 == null || data2 == null)
            return false;
        return data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano;
    }

    public boolean diferenteDe(Data outraData) 
    {
        //return !this.igualA(outraData) //ou  
        return this.igualA(outraData) == false;
    }

    public static boolean diferenteDe(Data data1, Data data2) 
    {
        return !igualA(data1, data2);
    }

    // menorQue
    public boolean anterior(Data outraData) 
    {
        if (outraData == null)
            return false;
        if (this.ano < outraData.ano) {
            return true;
        } else if (this.ano == outraData.ano) {
            if (this.mes < outraData.mes) {
                return true;
            } else if (this.mes == outraData.mes) {
                return this.dia < outraData.dia;
            }
        }
        return false;
    }

    // menorQue
    public static boolean anterior(Data data1, Data data2) 
    {
        if (data1 == null || data2 == null)
            return false;
        if (data1.ano < data2.ano) {
            return true;
        } else if (data1.ano == data2.ano) {
            if (data1.mes < data2.mes) {
                return true;
            } else if (data1.mes == data2.mes) {
                return data1.dia < data2.dia;
            }
        }
        return false;
    }

    // maiorQue
    public boolean posterior(Data outraData) 
    {
        if (outraData == null)
            return false;
        if (this.ano > outraData.ano) {
            return true;
        } else if (this.ano == outraData.ano) {
            if (this.mes > outraData.mes) {
                return true;
            } else if (this.mes == outraData.mes) {
                return this.dia > outraData.dia;
            }
        }
        return false;
    }

    // maiorQue
    public static boolean posterior(Data data1, Data data2) 
    {
        if (data1 == null || data2 == null)
            return false;
        if (data1.ano > data2.ano) {
            return true;
        } else if (data1.ano == data2.ano) {
            if (data1.mes > data2.mes) {
                return true;
            } else if (data1.mes == data2.mes) {
                return data1.dia > data2.dia;
            }
        }
        return false;
    }

    public boolean maiorOuIgual(Data outraData) 
    {
        return this.igualA(outraData) || this.posterior(outraData);
    }

    public static boolean maiorOuIgual(Data data1, Data data2) 
    {
        return igualA(data1, data2) || posterior(data1, data2);
    }

    public boolean menorOuIgual(Data outraData) 
    {
        return this.igualA(outraData) || this.anterior(outraData);
    }

    public static boolean menorOuIgual(Data data1, Data data2) 
    {
        return igualA(data1, data2) || anterior(data1, data2);
    }

    public String toString() {
        return dia + "/" + mes + "/" + ano;
    }

}
