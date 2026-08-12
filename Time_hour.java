import java.util.*;
import java.math.*;
class Time_hour{
    int min;
    int hour;
    int sec;
    Time_hour(int h,int m,int s){
        this.hour=h;
        this.min=m;
        this.sec=s;
    }
    public void Add_time(int s){
        sec +=s;
        if(sec>=60){
            min=min+(sec/60);
            sec=sec%60;
        }
        if(min>=60){
            hour +=(min/60);
            min =min%60;
        }
    }
    public void Sub_time(int s){
        sec -=s;
        if(sec<0){
            if(sec<60){
                min--;
            }
            min=min+sec/60;
            sec=Math.abs(sec)%60;
        }
        if(min<0){
            hour +=min/60;
            min =Math.abs(min)%60;
        }
    }
    public void dispaly() {
        System.out.println("HH:MM:SS"+"  "+hour+":"+min+":"+sec);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Hour: ");
        int hour=sc.nextInt();
        System.out.print("Enter Minute: ");
        int minute=sc.nextInt();
        System.out.print("Enter second :");
        int second=sc.nextInt();
        Time_hour t1= new Time_hour(hour, minute, second);
        t1.dispaly();
        System.out.print("Enter How Many Second Add:");
        int addsecond=sc.nextInt();
        t1.Add_time(addsecond);
        t1.dispaly();
        System.out.print("Enter How Many Second Subtract:");
        int subsecond=sc.nextInt();
        t1.Sub_time(subsecond);
        t1.dispaly();

    }
}