package oop;

import java.util.*;



public class arraymax {

    static int size = 100;
    public static void main(String[] args) { 
        
        int[] arr = new int[size];
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size : ");
        size = in.nextInt();
        System.out.println("Enter the element of the array : ");
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }
        int maximum = Arrays.stream(arr).max().getAsInt();
        
        System.out.println("Max value in given array is : " + maximum);
        
    }
    
}
