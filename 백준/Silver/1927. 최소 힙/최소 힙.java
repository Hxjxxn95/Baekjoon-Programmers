
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;
import java.util.Queue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int n = Integer.parseInt(br.readLine());
        PriorityQueue<Integer> heap = new PriorityQueue<>();

        for(int i = 0; i < n; i++) {
            int a = Integer.parseInt(br.readLine());
            if(a>0) {
                heap.add(a);
            }else{
                if(heap.isEmpty()) {
                    sb.append(0).append('\n');
                    continue;
                }
                sb.append(heap.poll()).append('\n');
            }
        }
        System.out.println(sb);
    }
}
