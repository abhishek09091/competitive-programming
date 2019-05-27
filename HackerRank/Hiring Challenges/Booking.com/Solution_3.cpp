int howManyAgentsToAdd(int noOfCurrentAgents, vector<vector<int>> callsTimes) {
	
	int n = callsTimes.size();
	int arr1[n];
	int exit[n];
	
	for(int i=0; i<n; i++){
		vector<int> temp = callsTimes[i];
		arr1[i] = temp[0];
		exit[i] = temp[1];
	}
	
	sort(arr1,arr1+n);
	sort(exit,exit+n);
	
	int guest_in = 1;
	int max_guests = 1;
	int i = 1, j = 0;
	
	while(i<n && j<n){
		
		if(arr1[i] <= exit[j]){
			guest_in++;
			
			if(guest_in > max_guests){
				max_guests = guest_in;
			}
			i++;
			
		}else{
			guest_in--;
			j++;
		}
	}
	
	if(max_guests > noOfCurrentAgents){
		return max_guests - noOfCurrentAgents;
	}else{
		return 0;
	}


}