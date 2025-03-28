import PacoteData.DataV3;

public class UsaDataV3 {
    public static void main(String[] args) {
        DataV3 d1 = new DataV3();
        d1.mostraData();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        byte d = 14;
        byte m = 7;
        if (DataV3.dataValida(d, m, (short) 2021)) {
            System.out.println("Data válida!");
            d1.setDia(d);
            d1.setMes(m);
        } else {
            System.out.println("Data inválida!");
        }
        
        d1.mostraData();


    }
}
