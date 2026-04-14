public class Main {
    public static void main(String[] args) {
        /* The Code Below will print
        Different Lines
         */
        System.out.println("Hello World!");
        System.out.println("Have a Good Day!");
        System.out.println("Arsenal vs. AFC Bournemouth"); //11th April
        System.out.println("Eze is Back!");
        System.out.print("Hincapie is Back ");
        System.out.print("Is Saka Back?");
        System.out.println("7");
        String club = "Arsenal";
        System.out.println("He Plays for " + club);
        final int YEAR = 2026;
        System.out.println("The Current Year is " + YEAR);
        int x = 5;
        int y = 12;
        System.out.println("The Sum is " + x + y);
        System.out.println("The Sum is " + (x + y));

        int length = 20;
        int width = 15;
        int area;

        area = length * width;
        System.out.println("The Area of a Rectangle is " + area);

        byte num = 127;
        System.out.println(num);
        short num2 = 32767;
        System.out.println(num2);
        int num3 = 2147483647;
        System.out.println(num3);
        long number = 12312412412412412L;
        System.out.println(number);
        float myFloat = 3.14f;
        System.out.println(myFloat);
        boolean myBoolean = true;
        System.out.println(myBoolean);
        char myChar = 67;
        System.out.println(myChar);
        var x1 = 'A';
        System.out.println(x1);

        int maxScore = 500;
        int userScore = 432;

        double percentage = (double) userScore / maxScore * 100.0d;
        System.out.println(percentage);
        double c = 10.0d;
        double d = 3.0d;
        System.out.println(c/d);
        String txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        System.out.println("The length of the text is " + txt.length());
        String text = "Hello World";
        System.out.println(text.toUpperCase());
        System.out.println(text.toLowerCase());

        System.out.println(Math.max(123,1));
        System.out.println(Math.min(124124, 1241242));
    }
}