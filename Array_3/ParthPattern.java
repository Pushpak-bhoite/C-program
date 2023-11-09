import java.util.*;
public class Main {
    public static void main(String[] args) {
        int size = 7;
        int[][] pattern = new int[size][size];

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                pattern[i][j] = Math.max(Math.abs(i - size / 2), Math.abs(j - size / 2)) + 1;
            }
        }

        // Print the pattern
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(pattern[i][j] + " ");
            }
            System.out.println();
        }
    }
}