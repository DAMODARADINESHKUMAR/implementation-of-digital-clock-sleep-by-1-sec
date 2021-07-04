/*c program to design a digital clock*/
#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
int hour,minute,second;
hour=minute=second=0;

while(1){
system ("clocktimetime");//output screen clear
printf("%02d:%02d:%02d",hour,minute,second);// printing the HH:MM:SS format e print
fflush(stdin);//output clear buffer in gcc

second++;//incremeant
if(second==60){
minute+=1;
second=0;
}
if(minute==60){
hour+=1;
minute=0;
}
if(hour==24){
hour=0;
minute=0;
second=0;
}
sleep(1);//sleep is a wait untill 1 seconds
}
return 0;// retutn the value zero
}




