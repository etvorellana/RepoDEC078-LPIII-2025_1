import PacoteData.DataV5;
 
public class UsaDataV5 {
    public static void main(String[] args) {
        DataV5 d1 = new DataV5((byte)1,(byte)1,(short)2000);
        d1.mostraData();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        byte d = 14;
        byte m = 7;
        if (DataV5.dataValida(d, m, (short) 2021)) {
            System.out.println("Data válida!");
            d1.setDia(d);
            d1.setMes(m);
        } else {
            System.out.println("Data inválida!");
        }
        
        d1.mostraData();

        DataV5 d2 = new DataV5(d1);
        d2.mostraData();
        DataV5 d3 = new DataV5(d1, 45);
        d3.mostraData();
        DataV5 d4 = new DataV5();
        d4.mostraData();

        if (d1 == d2)
            System.out.println("d1 == d2");
        else
            System.out.println("d1 != d2");


    }
}
