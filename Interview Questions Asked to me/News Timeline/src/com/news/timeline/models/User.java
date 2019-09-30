package com.news.timeline.models;

import java.util.*;

public class User {

    private String userName;
    private Set<String> followedUser;

    public User(String userName){
        this.userName = userName;
        this.followedUser = new HashSet<>();
    }

    public String getUserName() {
        return userName;
    }

    public Set<String> getFollowedUser() {
        return followedUser;
    }

    public void setFollowedUser(String userName) {
         followedUser.add(userName);
    }

    @Override
    public boolean equals(Object o) {
        System.out.println("Equals called");
        if (this == o) return true;
        if (!(o instanceof User)) return false;
        User user = (User) o;
        return Objects.equals(getUserName(), user.getUserName());
    }

    @Override
    public int hashCode() {
        System.out.println("hashCode called");
        return Objects.hash(getUserName());
    }

    @Override
    public String toString() {
        return "User{" +
                "userName='" + userName + '\'' +
                '}';
    }
}
