package com.news.timeline.utils;

import com.news.timeline.extensible.TimeLineView;
import com.news.timeline.models.Feed;


public class SortByFeedId implements TimeLineView<Feed> {

    @Override
    public int compare(Feed o1, Feed o2) {
        if(o1.getFeedId() < o2.getFeedId()) return 1;
        if(o1.getFeedId() > o2.getFeedId()) return -1;
        else return 0;
    }
}
