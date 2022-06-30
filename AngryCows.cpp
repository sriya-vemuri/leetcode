
bool isPoss(vector<int> pos, int n, int c,int m){
    int cow = 1;
    int last = pos[0];
    for(int i=1;i<n;i++){
        if (pos[i] - last >= m) {
          cow++;
          last = pos[i];
        }
    }
    if (cow >= c) return true;
      return false;
    
}

int chessTournament(vector<int> positions , int n ,  int c){
	sort(positions.begin(),positions.end());
    int low = 1, high = positions[n - 1] - positions[0];

      while (low <= high) {
        int mid = (low + high) >> 1;

        if (isPoss(positions, n, c, mid)) {
          low = mid + 1;
        } else {
          high = mid - 1;
        }
      }
    return high;
}
