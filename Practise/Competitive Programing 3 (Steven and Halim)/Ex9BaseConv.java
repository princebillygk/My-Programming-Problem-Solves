import java.util.*;
class Ex9BaseConv{
			public static void main(String[] args){
				Scanner sc= new Scanner(System.in);
				System.out.println("Enter the number:");
				String  num= sc.next();
				System.out.println("Enter the base:");
				int base=sc.nextInt();
				System.out.println("Enter desired base:");
				int des= sc.nextInt();
				int n=Integer.parseInt(num,base);
				System.out.println("Enter desired base:"
				+Integer.toString(n,des));
			}

	}
