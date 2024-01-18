class Neko {
    String name;

    Neko(String name) {
        this.name = name;
    }

    void naku() {
        System.out.println("にゃあ、俺様は" + name + "だ。");
    }
}

class NekoAsobi {
    public static void main(String[] args) {
        Neko tm = new Neko("タマ"), mk = new Neko("ミケ");
        tm.naku();
        mk.naku();
    }
}
