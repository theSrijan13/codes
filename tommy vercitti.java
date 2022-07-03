package com.company;

class Tommy{

    public void run(){
        System,out.println("running behind the enemy");
    }

    public void hit(){
        System.out.println("hitting the enemy");

    }
    public void fire(){
        System.out.println("firing on the enemy");
    }
}
 public class main{
    public static void main(String args[]){
        Tommy t=new Tommy();
        t.run();
        t.hit();
        t.fire();
    }
 }