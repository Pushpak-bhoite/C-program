// There is a group of NN friends who wish to enroll in a course together. The course has a maximum capacity of MM students that can register for it. If there are KK other students who have already enrolled in the course, determine if it will still be possible for all the NN friends to do so or not.
#include<stdio.h>
int main(){
    int n=5,m=40,k=38;
    printf("enter the friends,capacity,registed\n");

    if(n<=(m-k)){
        printf("YES\n");
    }else{
        printf("NO");
    }
}