import java.util.ArrayList;
import java.util.Scanner;

class Place {
    private String name;
    private int left, right;

    public Place(String name, int x, int y) {
        this.name = name;
        this.left = x;
        this.right = y;
    }

    public int ask() {
        System.out.println("\nここは" + name + "です");
        System.out.println("どちらに行きますか？");
        System.out.println("1 左 2 右");
        try (Scanner scanner = new Scanner(System.in)) {
            int a = scanner.nextInt();
            if (a == 1) {
                return left;
            } else if (a == 2) {
                return right;
            } else {
                return 0;
            }
        }
    }
}

class AdvGame {
    private int pos = 0;
    private ArrayList<Place> bs = new ArrayList<Place>();

    public AdvGame() {
        bs.add(new Place("町", 1, 2));
        bs.add(new Place("海", 0, 3));
        bs.add(new Place("山", 0, 1));
    }

    public void play() {
        System.out.println("さあ、冒険だ！！！");
        for (int i = 0; i < 5; i++) {
            pos = bs.get(pos).ask();
            if (pos == bs.size() - 1) {
                System.out.println("\nゴール！！！");
                return;
            }
        }
        System.out.println("\n残念！時間切れです");
    }

}

class adv {
    public static void main(String[] args) {
        AdvGame ag = new AdvGame();
        ag.play();
    }
}
