int maximum_cookies(vector<int> jars) {

    long long incl = jars[0];
    long long exl = 0;
    long long exl_new = 0;
    for(int i=1; i<jars.size(); i++){

        exl_new = (incl > exl)? incl : exl;

        incl = exl + jars[i];
        exl = exl_new;
    }

    return (int)((incl > exl) ? incl : exl);

}