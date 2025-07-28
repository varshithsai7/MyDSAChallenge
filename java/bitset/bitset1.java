package bitset;

import java.util.BitSet;

public class bitset1 {
    public static void main(String[] args) {
        BitSet b1=new BitSet();
        BitSet b2=new BitSet(5);
        b1.set(4);
        System.out.println(b1);
        b2.set(2);
        b2.set(4);
        System.out.println(b2);
        System.out.println(b1.length());
        System.out.println(b1.cardinality());
        System.out.println(b2.cardinality());
        System.out.println(b1.get(4));
        System.out.println(b2.get(2));

        for(int i=0;i<5;i++){
            if(i%2==0){
                b1.set(i);
            }
            else{
                b2.set(i);
            }
        }
        System.out.println(b1 + " " +b2);
        b1.and(b2);
        System.out.println(b1);
        b1.or(b2);
        System.out.println(b1);
        b1.xor(b2);
        System.out.println(b1);
        Object b3=b2.clone();
        b2.equals(b3);
        System.out.println(b2);
        System.out.println(b3);
        System.out.println(b2.intersects(b1));
        System.out.println(b1.get(2,5));
        System.out.println(b1.isEmpty());
        b1.set(3,true);
        System.out.println(b1);
        System.out.println(b2.size());

    }
}
