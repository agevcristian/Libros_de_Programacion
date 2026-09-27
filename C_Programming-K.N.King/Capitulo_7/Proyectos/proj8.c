#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int hour, minutes, time_in_minutes, departure, arrival, result_departure_hour, result_departure_minute, result_arrival_hour, result_arrival_minute;
    char am_pm;
    
    printf("Enter a 12-hour time(hours:minute [followed by eitherA, P, AM or PM]): ");
    scanf("%d:%d",&hour,&minutes);
    getchar();
    while ((am_pm = getchar()) == ' ')
        ;
    
    am_pm = toupper(am_pm);
    
    if (hour == 12 && am_pm == 'A') {
        hour = 0;
    }

    if (am_pm == 'P' && hour != 12) {
        hour += 12;
    }

    time_in_minutes = hour * 60 + minutes;

    if (time_in_minutes < 8*60) { //Antes de la salida 8am
       departure = 8*60;
       arrival = 10*60 + 16;
    }
    else if (time_in_minutes < 9*60 + 43) { //Antes de las 9:43am
            //Elegir entre 8am y 9:43am 
            if (time_in_minutes - 8*60 <= (9*60+43) - time_in_minutes) {
                departure = 8*60;
                arrival = 10*60+16;
            }
            else {
                departure = 9*60+43;
                arrival = 11*60+52;
            }
    } else if (time_in_minutes < 11*60+19) {//Antes de las 11:19am
            //Elegir entre 9:43am y 11:19am 
            if (time_in_minutes - (9*60+43) <= (11*60+19) - time_in_minutes) {
                departure = 9*60+43;
                arrival = 11*60+52;
            }
            else {
                departure = 11*60+19;
                arrival = 13*60+31;
            }
    } else if (time_in_minutes < 12*60+47) {//Antes de las 12:47pm
            //Elegir entre 11:19am y 12:47pm 
            if (time_in_minutes - (11*60+19) <= (12*60+47) - time_in_minutes) {
                departure = 11*60+19;
                arrival = 13*60+31;
            }
            else {
                departure = 12*60+47;
                arrival = 15*60;
            }
    } else if (time_in_minutes < 14*60) {//Antes de las 2pm
              //Elegir entre las 12:47pm y las 2pm 
              if (time_in_minutes - (12*60+47) <= (14*60) - time_in_minutes) {
                  departure = 12*60+47;
                  arrival = 15*60;
              }
              else {
                  departure = 14*60;
                  arrival = 16*60+8;
              }
    } else if (time_in_minutes < 15*60+45) { //Antes de las 3:45pm
              //Elegir entre 2pm y 3:45pm 
              if (time_in_minutes - (14*60) <= (15*60+45) - time_in_minutes) {
                  departure = 14*60;
                  arrival = 16*60+8;
              }
              else {
                  departure = 15*60+45;
                  arrival = 17*60+55;
              }
    } else if (time_in_minutes < 19*60) { // Antes de las 7pm
              //Elegir entre las 3:45pm y las 7pm 
              if (time_in_minutes - (15*60+45) <= (19*60) - time_in_minutes) {
                  departure = 15*60+45;
                  arrival = 17*60+55;
              }
              else {
                  departure = 19*60;
                  arrival = 21*60+20;
              }
    } else if (time_in_minutes < 21*60+45) { //Antes de las 9:45pm 
              //Elegir entre las 7pm y las 9:45 pm 
              if (time_in_minutes - (19*60) <= (21*60+45) - time_in_minutes) {
                  departure = 19*60;
                  arrival = 21*60+20;
              }
              else {
                  departure = 21*60+45;
                  arrival = 23*60+58;
              }
    } else { //Pasadas las 9:45pm 
             departure = 21*60+45;
             arrival = 23*60+58;
    }

   result_departure_hour = departure/60;
   result_departure_minute = departure%60;
   result_arrival_hour = arrival/60;
   result_arrival_minute = arrival%60;

    if (result_departure_hour > 12)
        result_departure_hour -= 12;
    if (result_arrival_hour > 12)
        result_arrival_hour -= 12;

   printf("Closest departure time is %d:%.2d ", result_departure_hour, result_departure_minute);
   if(departure >= 12*60)
      printf("p.m");
   else
      printf("a.m");

   printf(", arriving at %d:%.2d ", result_arrival_hour, result_arrival_minute);
   if(arrival >= 12*60)
       printf("p.m");
   else 
       printf("a.m");

   printf(".\n");

   return 0;

}
