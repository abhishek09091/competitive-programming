package com.news.timeline.utils;

public class PrintingHandler {

    public static void printInformation(){
        System.out.println("*********************************************************************");
        System.out.println("Please choose one of the options:");
        System.out.println("post <Message to be posted on timeline>");
        System.out.println("follow,(your name),(username to be followed)");
        System.out.println("timeline");
        System.out.println("upvote (feedback ID)");
        System.out.println("downvote (feedback ID)");
        System.out.println("logout");
        System.out.println("*********************************************************************");
    }
}
