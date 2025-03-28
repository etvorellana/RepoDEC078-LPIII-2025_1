import PacoteData.DataV2;

public class UsaDataV2 {
    public static void main(String[] args) {
        DataV2 d1 = new DataV2();
        boolean ok = d1.iniData((byte) 1, (byte) 1, (short) 2021);
        if (ok == true)
            d1.mostraData();
        else
            System.out.println("Data inválida!");

        d1.setDia((byte) 14);
        d1.setMes((byte) 7);

        d1.mostraData();


    }
}
