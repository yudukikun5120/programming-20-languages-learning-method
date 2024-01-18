import java.util.ArrayList;

class ALTest {
    public static void main(String[] args) {
        ArrayList<Integer> ds = new ArrayList<Integer>();
        ds.add(10);
        ds.add(20);
        ds.add(30);
        for (int i = 0; i < ds.size(); i++) {
            System.out.println(ds.get(i));
        }
    }
}
