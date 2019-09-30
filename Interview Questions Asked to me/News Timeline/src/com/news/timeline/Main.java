package com.news.timeline;

import com.news.timeline.models.Feed;
import com.news.timeline.models.User;
import com.news.timeline.utils.Handler;
import com.news.timeline.utils.PrintingHandler;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
	// write your code here

        Map<User,List<Feed>> inMemoryStorage = new HashMap<>();
        Map<String,User> getUser = new HashMap<>();

        Scanner sc = new Scanner(System.in);
        while(true){
            try{
                System.out.println("Welcome to News Timeline Application");
                System.out.println("Example:");
                System.out.println("login (your name) ");
                System.out.println("Please login: ");
                String input = sc.nextLine();
                System.out.println(inMemoryStorage);
                if(input == null || "".equals(input)){
                    throw  new Exception("Input should not be null or empty");
                }
                if(Handler.loginHandler(input,inMemoryStorage,getUser)){
                    PrintingHandler.printInformation();
                    String activity = sc.nextLine();
                    while(!activity.contains("logout")){
                        Handler.remainingHandler(activity,inMemoryStorage,getUser);
                        PrintingHandler.printInformation();
                        activity = sc.nextLine();
                        System.out.println("Activity choosen is: "+ activity);
                    }

                }else{
                    throw new Exception("Please try to re-login again.");
                }

            }catch (Exception e){
                System.out.println(e.getMessage());
            }
        }
    }
}
