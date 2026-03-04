#include<stdio.h>
int main(){
    int marks[5];
    int i, total =0;
    float aggregate;
    int pass = 1;

    printf("enter marks of 5 subjects:\n");
    for(i=0;i<5;i++){
    scanf("%d",&marks[i]);

    if(marks[i]<40){
        pass =0;
    }
    total=total+marks[i];
}
    aggregate= total/5.0;

    if (pass == 0){
        printf("\nresult:fail");
    }
    else {
        printf("\nresult: PASS");
        printf("\naggregate: %.2f", aggregate);

        if(aggregate >= 75) {
            printf("\nGrade: Distinction");
        } else if(aggregate >= 60) {
            printf("\nGrade: First Division");
        } else if(aggregate >= 50) {
            printf("\nGrade: Second Division");
        } else {
            printf("\nGrade: Third Division");
        }
    }
    return 0;

}
