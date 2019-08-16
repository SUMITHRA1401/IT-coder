#include <stdio.h>
struct TIME
{
  int sec;
  int min;
  int hrs;
};
void differenceBetweenTime(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
    struct TIME startTime, stopTime, diff;
    printf("Enter start time: \n");
    printf("Enter hrs, min and sec: ");
    scanf("%d %d %d", &startTime.hrs, &startTime.min, &startTime.sec);
    printf("Enter stop time: \n");
    printf("Enter hrs, min and sec: ");
    scanf("%d %d %d", &stopTime.hrs, &stopTime.min, &stopTime.sec);
    differenceBetweenTime(startTime, stopTime, &diff);
    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hrs, startTime.min, startTime.sec);
    printf("%d:%d:%d ", stopTime.hrs, stopTime.min, stopTime.sec);
    printf("= %d:%d:%d\n", diff.hrs, diff.min, diff.sec);
    return 0;
}
void differenceBetweenTime(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.sec > start.sec){
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - stop.sec;
    if(stop.min > start.min){
        --start.hrs;
        start.min += 60;
    }
    diff->min = start.min - stop.min;
    diff->hrs = start.hrs - stop.hrs;
}
