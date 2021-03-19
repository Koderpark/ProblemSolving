int f(){
    int max = 0;
    for(int i=0; i<n; i++){
        if(max < d[i]){
            max = d[i];
        }
    }
     
    for(int i=0; i<n; i++){
        if(max == d[i]){
            return i+1;
        }
    }
}
