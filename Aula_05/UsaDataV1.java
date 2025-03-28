import PacoteData.DataV1;

public class UsaDataV1 {
    public static void main(String[] args) {
        DataV1 d1;  
        d1 = new DataV1();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        d1.dia = 31;
        d1.mes = 14;

        d1.mostraData();
 

    }
}
