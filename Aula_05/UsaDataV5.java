import PacoteData.Data;
 
public class UsaDataV5 {
    public static void main(String[] args) {
        Data d1 = new Data((byte)1,(byte)1,(short)2000);
        d1.mostraData();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        byte d = 14;
        byte m = 7;
        if (Data.dataValida(d, m, (short) 2021)) {
            System.out.println("Data válida!");
            d1.setDia(d);
            d1.setMes(m);
        } else {
            System.out.println("Data inválida!");
        }
        
        d1.mostraData();

        Data d2 = new Data(d1);
        d2.mostraData();
        Data d3 = new Data(d1, 45);
        d3.mostraData();
        Data d4 = new Data();
        d4.mostraData();

        if (d1 == d2)
            System.out.println("d1 == d2");
        else
            System.out.println("d1 != d2");


    }
}
