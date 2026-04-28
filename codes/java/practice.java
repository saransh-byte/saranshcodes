import java.util.Scanner;

// Parent class
class InputData {
    int a, b;

    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        a = sc.nextInt();
        System.out.print("Enter second number: ");
        b = sc.nextInt();
    }
}

// Child class (inherits InputData)
class Calculate extends InputData {
    int sum;

    void calculate() {
        sum = a + b;
    }
}

// Child class (inherits Calculate)
class Display extends Calculate {

    void display() {
        System.out.println("Sum = " + sum);
    }
}

// Main class
public class practice {
    public static void main(String[] args) {

        Display obj = new Display();

        obj.input();      // from InputData class
        obj.calculate();  // from Calculate class
        obj.display();    // from Display class
    }
}
