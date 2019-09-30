package com.news.timeline.models;

import java.util.Objects;

public class Feed {

    private Integer feedId;
    private String feed;
    private Integer upvote;
    private Integer downvote;

    public Feed(Integer feedId,String feed){
        this.feedId = feedId;
        this.feed = feed;
        this.upvote = 0;
        this.downvote = 0;
    }


    @Override
    public String toString() {
        return "Feed{" +
                "feedId=" + feedId +
                ", feed='" + feed + '\'' +
                ", upvote=" + upvote +
                ", downvote=" + downvote +
                '}';
    }

    public Integer getFeedId() {
        return feedId;
    }

    public void setFeedId(Integer feedId) {
        this.feedId = feedId;
    }

    public String getFeed() {
        return feed;
    }

    public void setFeed(String feed) {
        this.feed = feed;
    }

    public Integer getUpvote() {
        return upvote;
    }

    public void setUpvote(Integer upvote) {
        this.upvote = upvote;
    }

    public Integer getDownvote() {
        return downvote;
    }

    public void setDownvote(Integer downvote) {
        this.downvote = downvote;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Feed)) return false;
        Feed feed = (Feed) o;
        return Objects.equals(getFeedId(), feed.getFeedId());
    }

    @Override
    public int hashCode() {

        return Objects.hash(getFeedId());
    }
}
