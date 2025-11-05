import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.List;
import java.util.ArrayList;

public class Main {

    static List<List<Integer>> v;
    static int N, M;
    static int maximum = 0;
    static List<List<Integer>> block;

    public static int counting(int n, int m, int num) {
        List<Integer> t = block.get(num);
        boolean is_overflow = false;
        int sum = 0;

        for (int i = 0; i < 4; i++) {
            int x = t.get(i) % 4;
            int y = t.get(i) / 4;
            if (y + n < N && x + m < M) {
                is_overflow = false;
                sum += v.get(y + n).get(x + m);
            } else {
                is_overflow = true;
                break;
            }
        }

        if (is_overflow) {
            return -1;
        } else {
            if (maximum < sum) {
                maximum = sum;
            }
            return sum;
        }
    }

    public static void create_block() {
        int[] t = new int[4];
        for (t[0] = 0; t[0] < 16; t[0]++) {
            for (t[1] = t[0] + 1; t[1] < 16; t[1]++) {
                for (t[2] = t[1] + 1; t[2] < 16; t[2]++) {
                    for (t[3] = t[2] + 1; t[3] < 16; t[3]++) {

                        int[] tmp = new int[16];
                        int check_block = 0;

                        for (int i = 0; i < 4; i++) {
                            tmp[t[i]] = 1;
                        }

                        for (int i = 0; i < 4; i++) {
                            int[] dir = { -1, 1, -4, 4 };
                            for (int j = 0; j < 4; j++) {
                                if (dir[j] + t[i] < 16 && dir[j] + t[i] >= 0) {
                                    if (tmp[dir[j] + t[i]] == 1) {
                                        if (!(j < 2 && ((dir[j] + t[i]) / 4) != (t[i] / 4))) {
                                            check_block += 1;
                                        }
                                    }
                                }
                            }
                        }

                        if (check_block < 6) {
                            continue;
                        } else {
                            List<Integer> newBlock = new ArrayList<>();
                            for (int val : t) {
                                newBlock.add(val);
                            }
                            block.add(newBlock);
                        }
                    }
                }
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        v = new ArrayList<>();
        block = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < M; j++) {
                row.add(Integer.parseInt(st.nextToken()));
            }
            v.add(row);
        }

        create_block();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                for (int k = 0; k < block.size(); k++) {
                    int tmp = counting(i, j, k);
                    if (tmp > maximum) {
                        maximum = tmp;
                    }
                }
            }
        }
        
        System.out.println(maximum);
    }
}