import PacoteData.DataV4;
 
public class UsaDataV4 {
    public static void main(String[] args) {
        DataV4 d1 = new DataV4((byte)1,(byte)1,(short)2000);
        d1.mostraData();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        byte d = 14;
        byte m = 7;
        if (DataV4.dataValida(d, m, (short) 2021)) {
            System.out.println("Data válida!");
            d1.setDia(d);
            d1.setMes(m);
        } else {
            System.out.println("Data inválida!");
        }
        
        d1.mostraData();

        DataV4 d2 = new DataV4(d1);
        d2.mostraData();
        DataV4 d3 = new DataV4(d1, 45);
        d3.mostraData();
        DataV4 d4 = new DataV4();
        d4.mostraData();

        if (d1 == d2)
            System.out.println("d1 == d2");
        else
            System.out.println("d1 != d2");


    }
}
