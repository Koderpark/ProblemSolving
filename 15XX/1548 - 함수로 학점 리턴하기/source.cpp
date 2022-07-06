char grade(int k){
    char grade;
    if(k < 101) grade = 'A';
    if(k < 90) grade = 'B';
    if(k < 80) grade = 'C';
    if(k < 70) grade = 'D';
    if(k < 60) grade = 'F';
    return grade;
}
