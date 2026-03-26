
import java.util.Scanner;
public class student{
    
    int marks;
    String name;

    int data(){
        marks=10;
        name="Shani";
        System.out.println("Name is "+name+" marks "+marks);
    }
    int data(int marks,String name){
        this.marks=marks;
        this.name=name;
        System.out.println("It is parameterized");
        System.out.println("Name is "+name+" marks "+marks);

    }
    
    
    public static void main(String[] args) {
        student s1=new student();
        student s2=new student(20,"practices2");
        student s3=new student(s2);

    }    
}