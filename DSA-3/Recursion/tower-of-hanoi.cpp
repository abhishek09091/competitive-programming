void toh(int N, int from, int to, int aux, long long &moves) {
    // Your code here
    if(N == 1){
      moves++;
      cout<< "move disk 1 from rod "<<from<<" to rod "<<to<<endl;
      return;
    }
    
   toh(N-1, from, aux, to, moves);
   moves++;
   cout<< "move disk "<< N <<" from rod "<< from <<" to rod "<< to <<endl;
   toh(N-1, aux, to, from, moves);
}