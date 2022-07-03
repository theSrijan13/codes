package com.company;

class Cellphone{

    public void ringing(){
        System.out.println("ringing....");

    }

    public void vibrating(){
        System.out.println("vibrating...");
    }

    public void Callfriend(){
        System.out.println("Calling a friend..");
    }
}

public class main{
    public static void main(String args[])
    {
        Cellphone asus=new Cellphone();
        asus.ringing();
        asus.vibrating();
        asus.Callfriend();
    }
}