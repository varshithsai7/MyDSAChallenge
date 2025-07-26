package collections;
import java.util.*;
import java.io.*;
public class Arrayse {
    public static void main(String[] args) {
        Integer arr[]=new Integer[]{4,5,6,7,1,2,3};
        List<Integer>l=Arrays.asList(arr);
        System.out.println(l);
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        System.out.println(Arrays.hashCode(arr));
        List<Integer>l2=new ArrayList<>();
        for(int i=0;i<arr.length;i++){
            l2.add(arr[i]);
        }
        System.out.println(Arrays.equals(l2.toArray()  , l.toArray()));
        System.out.println(Arrays.binarySearch(arr, 4));
        Arrays.sort(arr,Collections.reverseOrder());
        System.out.println(Arrays.toString(arr));
        Arrays.sort(arr,3,6);
        System.out.println(Arrays.toString(arr));
        System.out.println(Arrays.mismatch(l.toArray(),l2.toArray()));
        Arrays.fill(l.toArray(),1);
        System.out.println(Arrays.toString(l.toArray()));
        System.out.println(Arrays.toString(l2.toArray()));

    }
}
