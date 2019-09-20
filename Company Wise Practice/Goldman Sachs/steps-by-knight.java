/*package whatever //do not write package name here */
/******

https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/
https://www.geeksforgeeks.org/minimum-steps-reach-target-knight-set-2/

*******/
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    static class Cell{
        
        int x, y;
        int dis;
        
        public Cell(int x,int y,int dis){
            this.x = x;
            this.y = y;
            this.dis = dis;
        }
        
    }
    
    public static boolean isInside(int x,int y,int N){
        
        if(x >= 1 && x<=N && y >=1 && y <=N){
            return true;
        }
        return false;
    }
    
    public static int minStepToReachTarget(int n,int knightPos[],int targetPos[]){
        
        int dx[] = {-2,-1,1,2,-2,-1,1,2};
        int dy[] = {-1,-2,-2,-1,1,2,2,1};
        
        Vector<Cell> q = new Vector<>();
        
        q.add(new Cell(knightPos[0],knightPos[1],0));
        
        Cell t;
        int x,y;
        boolean visit[][] = new boolean[n + 1][n + 1];
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                visit[i][j] = false;
            }
        }
        
        visit[knightPos[0]][knightPos[1]] = true;
        
        while(!q.isEmpty()){
            
            t = q.firstElement();
            q.remove(0);
            
            if(t.x == targetPos[0] && t.y == targetPos[1]){
                return t.dis;
            }
            
            for(int i=0; i<8; i++){
                
                x = dx[i] + t.x;
                y = dy[i] + t.y;
                
                if(isInside(x,y,n) && !visit[x][y]){
                    visit[x][y] = true;
                    q.add(new Cell(x,y,t.dis + 1));
                }
            }
        }
        
        return Integer.MAX_VALUE;
    }
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		
		Integer t = sc.nextInt();
		
		while(t-- > 0){
		    
		    Integer n = sc.nextInt();
		    
		    int knightPos[] = new int[2];
		    int targetPos[] = new int[2];
		    
		    for(int i=0; i<2; i++){
		        knightPos[i] = sc.nextInt();
		    }
		    
		    for(int i=0; i<2; i++){
		        targetPos[i] = sc.nextInt();
		    }
		    
		    System.out.println(minStepToReachTarget(n,knightPos,targetPos));
		    
		}
		
		sc.close();
	}
}