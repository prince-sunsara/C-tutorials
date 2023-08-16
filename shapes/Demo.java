/*
spce@hmp:~/JP$ javac -d . Shape.java

spce@hmp:~/JP$ javac -d . Rectangle.java

spce@hmp:~/JP$ javac -d . Triangle.java

spce@hmp:~/JP$ javac -d . Demo.java

spce@hmp:~/JP$ java Demo

Error: Could not find or load main class Demo

spce@hmp:~/JP$ java same.Demo
*/



package same;

class Demo
{
	public static void main(String s[])
	{
		Rectangle r=new Rectangle(4,5);
		Triangle t=new Triangle(2,3);
		int r_area=r.disparea();

		System.out.println("Area of Rectangle="+r_area);
		int t_area=t.disparea();
                System.out.println("Area of Triangle="+t_area);
	}
}
