#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'string_interleaving' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING string1
 *  2. STRING string2
 */

string string_interleaving(string string1, string string2) {

    if(string1 == "" && string2 == ""){
        return string1;
    }else if(string1 == ""){
        return string2;
    }else if(string2 == ""){
        return string1;
    }

    string res = "";
    int len_1 = string1.length();
    int len_2 = string2.length();
    int i =0 , j =0 ;
    bool flag = true;
    while(i<len_1 && j <len_2){

        if(flag){
            res += string1[i];
            i++;
            flag = false;
        }else{
            res += string2[j];
            j++;
            flag = true;
        }
    }

    while(i<len_1){
        res += string1[i++];
    }

    while(j<len_2){
        res += string2[j++];
    }

    return res;
}
