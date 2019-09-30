package com.news.timeline.utils;

import com.news.timeline.models.Feed;
import com.news.timeline.models.User;

import java.util.*;

public class FeedbackData {


    public static void postFeedback(Map<User,List<Feed> > inMemoryStorage,User user,Feed feed){
        inMemoryStorage.get(user).add(feed);
        System.out.println(user.getUserName()+": Feed Added Successfully");
    }

    public static List<Feed> getAllFeeds(Map<User,List<Feed> > inMemoryStorage,User loggedUser,Map<String,User> getUser){

        Set<String> followed = loggedUser.getFollowedUser();
        System.out.println("Followed user: " + followed);
        List<Feed> allFeeds = new ArrayList<>();

        Iterator value = followed.iterator();

        while(value.hasNext()){
            String followedUser = (String) value.next();
            User user = getUser.get(followedUser);
            List<Feed> followedUserFeed = inMemoryStorage.get(user);
            System.out.println("Followed user feed: "+followedUserFeed);
            for(int i=0; i<followedUserFeed.size(); i++){
                allFeeds.add(followedUserFeed.get(i));
            }

        }
        Collections.sort(allFeeds,new SortByFeedId());
        return allFeeds;
    }

    public static void upVote(String id,Integer vote,Map<Integer,Feed> feed) throws  Exception{
        Integer iid = Integer.parseInt(id);
        if(feed.containsKey(iid)){
            Integer presentCount = feed.get(iid).getUpvote() + vote;
            feed.get(iid).setUpvote(presentCount);
        }else{
            throw new Exception("Id doesn't exists");
        }
    }

    public static void downVote(String id,Integer vote,Map<Integer,Feed> feed) throws  Exception{
        Integer iid = Integer.parseInt(id);
        if(feed.containsKey(iid)){
            Integer presentCount = feed.get(iid).getDownvote() + vote;
            feed.get(iid).setDownvote(presentCount);
        }else{
            throw new Exception("Id doesn't exists");
        }
    }
}
