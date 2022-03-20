import java.util.*;
public class Ateam{


    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int cases = sc.nextInt();
        int f;
        int s;
        int t;
        int count=0;
        for(int i =0;i<cases;i++){
            f=sc.nextInt();
            s=sc.nextInt();
            t=sc.nextInt();
            if(f==1&&s==1||s==1&&t==3||f==1&&t==1){
                count++;
            }
            
        }
        System.out.println(count);












}
}