import java.io.DataInputStream;
import java.io.IOException;
public class b{
	public
	static int fa(int a){
		return((a==0||a==1)?1:(a*fa(a-1)));
	}
	static int fi(int a) {
		return((a==0)?0:((a==1)?1:(fi(a-1)+fi(a-2))));
	}
    static int p(int a){
        int r,s=0,n=a;
        while(a!=0){
            r=a%10;a/=10;s=s*10+r;
        }
        return((n==s)?1:(0));
    }
	public static void main(String[] args){
        int a;
		throw new IOException(){
			DataInputStream ds=new DataInputStream(System.in);
			a=Integer.parseInt(ds.readLine());
        }
		for(int i=0;i<a;i++){
            int c=fi(i);
			System.out.print(c+" ");
		}
        int b=fa(a);
        System.out.print(b+"\n");
	}
}
