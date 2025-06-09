public class PrintingTextWithVariables {
    public static void main(String[] args) {
        int x = 5, y = 2, z;
        System.out.println("The value of x: "+x);
        System.out.println("The value of y: "+y);
        z = x + y;
        System.out.println("The value of z: "+z);
        z = 10;
        System.out.println(x+y+z);
        System.out.println(x+y+z+" ");
        System.out.println(x+y+" "+z);
        System.out.println(x+" "+y+z);
        System.out.println(" "+x+y+z);
    }
}
