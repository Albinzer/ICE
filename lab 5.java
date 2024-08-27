import java.util.Arrays;
import java.util.Collections;

public class SortArray {

    public static void sortAscending(Integer[] arr) {
        Arrays.sort(arr);
    }

    public static void sortDescending(Integer[] arr) {
        Arrays.sort(arr, Collections.reverseOrder());
    }

    public static void printArray(Integer[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Integer[] arr = {5, 3, 8, 1, 2};

        System.out.println("Original array: ");
        printArray(arr);

        sortAscending(arr);
        System.out.println("Array in ascending order: ");
        printArray(arr);

        sortDescending(arr);
        System.out.println("Array in descending order: ");
        printArray(arr);
    }
}
