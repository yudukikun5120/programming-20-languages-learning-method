class Teller {
    public static void main(String[] args) {
        int x = (int) (Math.random() * 3);
        if (x == 0) {
            System.out.println("大吉です");
        }
        else if (x == 1) {
            System.out.println("普通です");
        }
        else {
            System.out.println("凶です");
        }
    }
}
