public class PascalPattern {

    public static void main(String[] args) {
        int rows = 4, coef = 1;

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j <= i; j++) {
                if (j == 0 || i == 0)
                    coef = 1;
                else
                    coef = coef * (i - j + 1) / j;

                System.out.print(coef + " ");
            }
        }
        System.out.println();
    }
}
