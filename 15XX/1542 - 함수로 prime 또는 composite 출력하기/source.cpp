void f(int k){
    int logic = 0;
    for(int i=2; i<k; i++){
        if(k % i == 0){
            logic = 1;
            break;
        }
    }
    printf("%s", logic?"composite":"prime");
    return;
}
