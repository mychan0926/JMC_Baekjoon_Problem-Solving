import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    static int n;
    static int[][] v;
    static int[] left_up;
    static int[] right_up;
    static int sum = 0;
    static int cutline = 0;

    public static void bishop(int count, int index) {
        if (sum > (2 * n - 1) - count + index) {
            return;
        }
        if (count == 2 * n - 1) {
            if (sum < index) {
                sum = index;
            }
            return;
        }
        int line_num = count + 1 - n;
        int tmp = Math.abs(line_num);
        if (line_num > 0) {
            for (int i = 0; i < n - tmp; i++) {
                if (v[i][i + tmp] == 1) {
                    if (right_up[i + i + tmp] == 0) {
                        right_up[i + i + tmp] = 1;
                        bishop(count + 1, index + 1);
                        right_up[i + i + tmp] = 0;
                    }
                }
            }
        } else {
            for (int i = 0; i < n - tmp; i++) {
                if (v[tmp + i][i] == 1) {
                    if (right_up[i + i + tmp] == 0) {
                        right_up[i + i + tmp] = 1;
                        bishop(count + 1, index + 1);
                        right_up[i + i + tmp] = 0;
                    }
                }
            }
        }
        bishop(count + 1, index);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());

        v = new int[n][n];
        left_up = new int[n + n]; 
        right_up = new int[n + n];

        StringTokenizer st;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                v[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        bishop(0, 0);
        System.out.println(sum);
    }
}