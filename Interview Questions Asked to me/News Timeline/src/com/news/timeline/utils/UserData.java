package com.news.timeline.utils;

import com.news.timeline.models.Feed;
import com.news.timeline.models.User;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class UserData {

    private static User loggedUser;

    public static boolean saveUserDetails(Map<User,List<Feed>> inMemoryStorage, User user){

        loggedUser = user;
        try {
            if(inMemoryStorage.containsKey(user)){
                System.out.println(user.getUserName() + " user name already taken");
                return true;
            }else{
                inMemoryStorage.put(user,new ArrayList<>());
                System.out.println(user.getUserName() + " Successfully added as user in the memory");
                return true;
            }
        }catch (Exception e){
            return false;
        }
    }

    public static User loggedUser(){
        return loggedUser;
    }

    public static void setLoggedUser(User user){
        loggedUser = user;
    }

}
