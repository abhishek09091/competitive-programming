int myCompare(string str_1,string str_2){
    
    string XY = str_1.append(str_2);
    string YX = str_2.append(str_1);
    
    
    return XY.compare(YX) > 0 ? 1 : 0;
}

string Solution::largestNumber(const vector<int> &A) {
    
    vector<string> res;
    int count = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i]== 0){
            count++;
        }
    }
    
    if(count == A.size()){
        return "0";
    }
    
    for(int i=0; i<A.size(); i++){
        string temp = to_string(A[i]);
        res.push_back(temp);
    }
    
    sort(res.begin(),res.end(),myCompare);
    string result = "";
    for(int i=0; i<res.size(); i++){
        result += res[i];
    }
    
    return result;
}
