import java.util.Scanner;

class Calc {
    public static void main(String[] args) {
        System.out.println("好きな整数を入力してください。");
        try (Scanner scanner = new Scanner(System.in)) {
            int x = scanner.nextInt();
            System.out.println("その10倍は" + (x * 10) + "です。");
        }
    }
}
