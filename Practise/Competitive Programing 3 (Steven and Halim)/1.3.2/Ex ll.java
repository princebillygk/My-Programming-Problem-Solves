import java.util.Scanner;
public class Exall{
		public static void main(String[] args){
				System.out.println("Exercise 1");
				Ex1();
				System.out.println("Exercise 2");
				Ex2();
				System.out.println("Exercise 3");
				Ex3();
				
		
		}
		//Take Input For K  Lines
		static void Ex1(){
				Scanner sc= new Scanner(System.in);
				int a,b,k=sc.nextInt();
				while(k-->0){
					a=sc.nextInt();
					b=sc.nextInt();
					System.out.println(a+b);
				};
		}
		//Take Input While EOF
		static void Ex2(){
				Scanner sc= new Scanner(System.in);
				int a,b;
				while(sc.hasNext()){
					a=sc.nextInt();
					b=sc.nextInt();
					System.out.println(a+b);
				};
		}
		//Take Input while 0 0
		static void Ex3(){
				Scanner sc= new Scanner(System.in);
				int a,b;
				while(true){
					a=sc.nextInt();
					b=sc.nextInt();
					if(a==0 && b==0)
						break;
					System.out.println(a+b);
				};
		}
		
}
