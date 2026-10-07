
#include <stdio.h>
#include <stdlib.h>

#define N 8 

int main(void) {
    int hour, minutes, time_in_minutes, i, minor_distance, minor, hour_dep_result, hour_arrival_result;
    int departure_time[N] = {8*60, 9*60 + 43, 11*60 + 19, 12*60 + 47, 14*60, 15*60 + 45, 19*60, 21*60 + 45};
    int arrival_time[N] = {10*60 + 16, 11*60 + 52, 13*60 + 31, 15*60, 16*60 + 8, 17*60 + 55, 21*60 + 20, 23*60 + 58};
    char c1, c2;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);
    time_in_minutes = hour*60 + minutes;
    
    minor_distance = abs(time_in_minutes - departure_time[0]); 
    i = 1;
    minor = i;
    while (i < N) {
        int new_distance = abs(time_in_minutes - departure_time[i]);
        if (new_distance <= minor_distance) {
            minor_distance = new_distance;
            minor = i;
        }
        ++i;
    } 
   c1 = c2 = 'p'; 
   hour_dep_result = departure_time[minor] / 60;
   hour_arrival_result = arrival_time[minor] / 60;
   
   if (hour_dep_result < 12) { 
        c1 = 'a';
   } else if (hour_dep_result > 12) {
        hour_dep_result -= 12;
   }
   
   if (hour_arrival_result < 12) {
        c2 = 'a';
   } else if (hour_arrival_result > 12) {
        hour_arrival_result -= 12;
   }

   printf("Closest departure time is: %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", hour_dep_result, departure_time[minor] % 60, c1, hour_arrival_result, arrival_time[minor] % 60, c2); 

   return 0;
}
