import java.util.Scanner;
//or import java.io.*;
class inputdemo {
    public static void main(String[] args) {
        try (Scanner Sc = new Scanner(System.in)) {
            System.out.print("Enter your age: ");
            int age = Sc.nextInt();

            System.out.print("Enter your name: ");
            String name = Sc.next();

            System.out.println("Age: " + age);
            System.out.println("Name: " + name);
        }
    }
}
