package com.news.timeline.utils;

import com.news.timeline.models.Feed;
import com.news.timeline.models.User;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Handler {

    static Integer feedCount = 0;
    static Map<Integer,Feed> getFeed = new HashMap<>();

    public static boolean loginHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser){

        if(input.contains("login")){
            String name = input.substring(6);
            System.out.println(name);

            if(getUser.containsKey(name)){
                UserData.setLoggedUser(getUser.get(name));
                return true;
            }else{
                User newUser = new User(name);
                getUser.put(name,newUser);
                UserData.saveUserDetails(inMemoryStorage,newUser);
                return true;
            }
        }
        return false;
    }

    public static void postHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser){
        String post = input.substring(5);
        Feed newFeed = new Feed(feedCount, post);
        getFeed.put(feedCount, newFeed);
        FeedbackData.postFeedback(inMemoryStorage, UserData.loggedUser(), newFeed);
        feedCount++;
        System.out.println(inMemoryStorage.get(UserData.loggedUser()));
    }

    public static void followHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser){
        String follow[] = input.split(",");
        if (getUser.containsKey(follow[2])) {
            System.out.println("Logged User: " + UserData.loggedUser());
            User tempUser = getUser.get(UserData.loggedUser().getUserName());
            tempUser.setFollowedUser(follow[2]);
            System.out.println(UserData.loggedUser().getFollowedUser());
            System.out.println("Successfully followed the person: " + follow[2]);
        } else {
            System.out.println(follow[2] + "Doesn't exit in the database");
        }
    }

    public static void timelineHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser){
        List<Feed> res = FeedbackData.getAllFeeds(inMemoryStorage, UserData.loggedUser(), getUser);

        System.out.println(res);
    }

    public static void upVoteAndDownVoteHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser) throws Exception{

        if (input.contains("upvote")) {
            String feedId = input.substring(7);
            System.out.println("feedId: " + feedId);
            FeedbackData.upVote(feedId, 1, getFeed);
        } else if(input.contains("downvote")){
            String feedId = input.substring(9);
            System.out.println("feedId: " + feedId);
            FeedbackData.downVote(feedId, -1, getFeed);
        }
    }


    public static void remainingHandler(String input,Map<User,List<Feed> >inMemoryStorage,Map<String,User> getUser){

        try {
            if (input.contains("post")) {

                Handler.postHandler(input,inMemoryStorage,getUser);

            }else if (input.contains("follow")) {

                Handler.followHandler(input,inMemoryStorage,getUser);

            } else if (input.contains("timeline")) {

                Handler.timelineHandler(input,inMemoryStorage,getUser);

            } else if (input.contains("upvote") || input.contains("downvote")) {

                Handler.upVoteAndDownVoteHandler(input,inMemoryStorage,getUser);

            } else {
                System.out.println("Functionality is not supported by News Timeline");
            }
        }catch (Exception e){
            e.printStackTrace();
        }
    }
}
