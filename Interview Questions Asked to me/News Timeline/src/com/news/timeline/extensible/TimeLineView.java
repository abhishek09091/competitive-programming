package com.news.timeline.extensible;

import com.news.timeline.models.Feed;

import java.util.Comparator;

public interface TimeLineView<T> extends Comparator<T> {

    @Override
    int compare(T o1, T o2);
}
