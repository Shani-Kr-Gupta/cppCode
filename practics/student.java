
import java.util.Scanner;
public class student{
    
    int marks;
    String name;

    student(){
        marks=10;
        name="Shani";
        System.out.println("Name is "+name+" marks "+marks);
    }
    student(int m,String n){
        marks=m;
        name=n;
        System.out.println("It is parameterized constructor");
        System.out.println("Name is "+name+" marks "+marks);

    }
        //copy constructor;
    student(student s){
        marks=s.marks;
        name=s.name;
        System.out.println("It is copy constructor");
        System.out.println("Name is "+name+" marks "+marks);
    }
    
    public static void main(String[] args) {
        student s1=new student();
        student s2=new student(20,"practices2");
        student s3=new student(s2);

    }    
}