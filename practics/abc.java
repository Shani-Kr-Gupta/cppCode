public static void main(String[] args) {
    int number=723;
    int sum=0;
    int a=0,b=0,c=0;
    
        c+=number%10;
    
        number=number/10;
        b+=number%10;
        number=number/10;
        a+=number%10;
        sum = a+b+c;
    
    System.out.println(a + "," + b + "," + c);
    System.out.println("Average :"+(sum/3));
    int avg=sum/3;
    System.out.println("Values : "+(a-avg)+","+(b-avg)+","+(c-avg));
}