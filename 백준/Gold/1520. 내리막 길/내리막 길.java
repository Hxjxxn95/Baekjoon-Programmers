
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static int[][] map;
    static int[][] dp;

    static int N,M;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        map = new int[N][M];
        dp = new int[N][M];

        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                map[i][j] = Integer.parseInt(st.nextToken());
                dp[i][j] = -1;
            }
        }

        System.out.println(func(0,0));

    }

    public static int func(int x , int y){

        int[] dx = {1,-1,0,0};
        int[] dy = {0,0,1,-1};

        if(x == N-1 && y == M - 1) return 1;
        if(dp[x][y] != -1) return dp[x][y];

        dp[x][y] = 0;

        for(int i = 0; i < 4; i++){

            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if( next_x < 0 || next_y < 0|| next_x >= N|| next_y >= M ) continue;

            if(map[x][y] > map[next_x][next_y]){
                dp[x][y] += func(next_x,next_y);
            }

        }

        return dp[x][y];
    }
}
