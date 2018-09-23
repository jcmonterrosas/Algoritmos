package fibonacci;

import java.util.*;
/**
 *
 * @author juanc
 */
public class Fibonacci {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Seleccione tipo de dato: ");
        System.out.println(" 1 Byte ");
        System.out.println(" 2 Short");
        System.out.println(" 3 Int");
        System.out.println(" 4 Long");
        switch (s.nextInt()) {
            case 1:
                System.out.println("Ingrese Byte: ");
                byte n_byte = s.nextByte();
                byte x_byte = 0;
                byte y_byte = 1;
                byte suma_byte = 0;
                for(byte i = 0; i < n_byte; i++){
                    if (y_byte > Byte.MAX_VALUE - x_byte) {
                        System.out.println("Overflow en la iteracion: " + (i+1));
                        break;
                    }
                    x_byte = y_byte;
                    y_byte = suma_byte;
                    suma_byte = (byte) (x_byte + y_byte);
                    System.out.print(y_byte + " ");
                }
                System.out.println("");
                break;
            case 2:
                System.out.println("Ingrese Shot");
                short n_short = s.nextShort();
                short x_short = 0;
                short y_short = 1;
                short suma_short = 0;
                for(short i = 0; i < n_short; i++){
                    if (y_short > Short.MAX_VALUE - x_short) {
                        System.out.println("Overflow en la iteracion: " + (i+1));
                        break;
                    }
                    x_short = y_short;
                    y_short = suma_short;
                    suma_short = (short) (x_short + y_short);
                    System.out.print(y_short + " ");
                }
                System.out.println("");
                break;
            case 3:
                System.out.println("Ingrese Int");
                int n_int = s.nextShort();
                int x_int = 0;
                int y_int = 1;
                int suma_int = 0;
                for(int i = 0; i < n_int; i++){
                    if (y_int > Integer.MAX_VALUE - x_int) {
                        System.out.println("Overflow en la iteracion: " + (i+1));
                        break;
                    }
                    x_int = y_int;
                    y_int = suma_int;
                    suma_int = (int) (x_int + y_int);
                    System.out.print(y_int + " ");
                }
                System.out.println("");
                break;
            case 4:
                System.out.println("Ingrese Long");
                long n_long = s.nextShort();
                long x_long = 0;
                long y_long = 1;
                long suma_long = 0;
                for(long i = 0; i < n_long; i++){
                    if (y_long > Long.MAX_VALUE - x_long) {
                        System.out.println("Overflow en la iteracion: " + (i+1));
                        break;
                    }
                    x_long = y_long;
                    y_long = suma_long;
                    suma_long = (long) (x_long + y_long);
                    System.out.print(y_long + " ");
                }
                break;
            default:
                System.out.println("Error");
                break;
        }
    }

}
