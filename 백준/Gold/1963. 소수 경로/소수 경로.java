
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static boolean[] prime;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        prime = new boolean[10000];
        for(int i = 2; i < 10000; i++){
            if(isPrime(i)){
                prime[i] = true;
            }
        }
        int N = Integer.parseInt(br.readLine());
        for(int i =0; i < N; i++){

            StringTokenizer st = new StringTokenizer(br.readLine());
            int start =Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());

            int[] cnt = new int[10000];
            boolean[] visited = new boolean[10000];

            Queue<Integer> queue = new LinkedList<>();
            queue.add(start);
            visited[start] = true;

            while(!queue.isEmpty()){

                int num = queue.poll();
                if(num == end) break;
                for(int j = 0; j < 4; j++){
                    for(int k = 0; k < 10; k++){
                        int next = change(num, j, k);
                        if(next >= 1000 &&  prime[next] && !visited[next]){
                            cnt[next] = cnt[num] + 1;
                            queue.add(next);
                            visited[next] = true;
                        }
                    }
                }
            }
            sb.append(cnt[end]).append("\n");
        }

        System.out.println(sb);

    }


    static boolean isPrime(int num){
        if(num == 1) return false;
        for(int i = 2; i < num; i++){
            if(num % i == 0) return false;
        }
        return true;
    }

    public static int change(int num, int i, int j) {
        StringBuilder sb = new StringBuilder(String.valueOf(num));
        sb.setCharAt(i, (char) (j+'0'));
        return Integer.parseInt(sb.toString());

    }



}
