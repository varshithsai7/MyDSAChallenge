package Mapinterface;

import java.util.*;

public class Hashmap {
    public static void main(String[] args) {
        Map<String,String>mp=new HashMap<>();
        mp.put("sweet","heart");
        mp.put("hi","hello");
        mp.put("bye","bye");
        System.out.println(mp);

        for(Map.Entry<String,String>e:mp.entrySet()){
            System.out.println(e.getKey()+ ":" +e.getValue());
        }
        System.out.println(mp.get("hi"));
        System.out.println(mp.containsKey("hi"));
        System.out.println(mp.containsValue("hello"));
        System.out.println(mp.isEmpty());
        System.out.println(mp.size());
        mp.remove("hi");
        System.out.println(mp);
        mp.clear();
        System.out.println(mp);

        Map<String,String>mp1=new LinkedHashMap<>();
        mp1.put("bad","good");
        mp1.put("one","two");
        mp1.put("sun","moon");
        System.out.println(mp1);
        for(Map.Entry<String,String>e:mp1.entrySet()){
            System.out.println(e.getKey()+":"+e.getValue());
        }
        Map<String,String>mp2=new TreeMap<>();
        mp2.put("red","black");
        mp2.put("blue","green");
        mp2.put("white","yellow");
        System.out.println(mp2);
        for(Map.Entry<String,String>e:mp2.entrySet()){
            System.out.println(e.getKey()+":"+e.getValue());
        }


    }


}
