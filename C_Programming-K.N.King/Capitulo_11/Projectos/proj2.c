#include <stdio.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);


int main(void) 
{
    int hour, 
        minutes, 
        time_in_minutes, 
        departure, 
        arrival, 
        result_departure_hour, 
        result_departure_minute, 
        result_arrival_hour, 
        result_arrival_minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minutes);

    time_in_minutes = hour * 60 + minutes;

    find_closest_flight(time_in_minutes, &departure, &arrival);

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


/****************************************************************************************
 * find_closest_flight: Will find the flight whose departure time is closest 
 *                      to desired_time(expressed in minutes since midnight). 
 *                      Will store the departure and arrival time(minutes since midnight)
 *                      of this flight in *departure_time and *arrival_time respectively.
 ***************************************************************************************/
void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
   if (desired_time < 8*60) { //Antes de la salida 8am
       *departure_time = 8*60;
       *arrival_time = 10*60 + 16;
    } else if (desired_time < 9*60 + 43) { //Antes de las 9:43am
            //Elegir entre 8am y 9:43am 
            if (desired_time - 8*60 <= (9*60+43) - desired_time) {
                *departure_time = 8*60;
                *arrival_time = 10*60+16;
            }
            else {
                *departure_time = 9*60+43;
                *arrival_time = 11*60+52;
            }
    } else if (desired_time < 11*60+19) {//Antes de las 11:19am
            //Elegir entre 9:43am y 11:19am 
            if (desired_time - (9*60+43) <= (11*60+19) - desired_time) {
                *departure_time = 9*60+43;
                *arrival_time = 11*60+52;
            }
            else {
                *departure_time = 11*60+19;
                *arrival_time = 13*60+31;
            }
    } else if (desired_time < 12*60+47) {//Antes de las 12:47pm
            //Elegir entre 11:19am y 12:47pm 
            if (desired_time - (11*60+19) <= (12*60+47) - desired_time) {
                *departure_time = 11*60+19;
                *arrival_time = 13*60+31;
            }
            else {
                *departure_time = 12*60+47;
                *arrival_time = 15*60;
            }
    } else if (desired_time < 14*60) {//Antes de las 2pm
              //Elegir entre las 12:47pm y las 2pm 
              if (desired_time - (12*60+47) <= (14*60) - desired_time) {
                  *departure_time = 12*60+47;
                  *arrival_time = 15*60;
              }
              else {
                  *departure_time = 14*60;
                  *arrival_time = 16*60+8;
              }
    } else if (desired_time < 15*60+45) { //Antes de las 3:45pm
              //Elegir entre 2pm y 3:45pm 
              if (desired_time - (14*60) <= (15*60+45) - desired_time) {
                  *departure_time = 14*60;
                  *arrival_time = 16*60+8;
              }
              else {
                  *departure_time = 15*60+45;
                  *arrival_time = 17*60+55;
              }
    } else if (desired_time < 19*60) { // Antes de las 7pm
              //Elegir entre las 3:45pm y las 7pm 
              if (desired_time - (15*60+45) <= (19*60) - desired_time) {
                  *departure_time = 15*60+45;
                  *arrival_time = 17*60+55;
              }
              else {
                  *departure_time = 19*60;
                  *arrival_time = 21*60+20;
              }
    } else if (desired_time < 21*60+45) { //Antes de las 9:45pm 
              //Elegir entre las 7pm y las 9:45 pm 
              if (desired_time - (19*60) <= (21*60+45) - desired_time) {
                  *departure_time = 19*60;
                  *arrival_time = 21*60+20;
              }
              else {
                  *departure_time = 21*60+45;
                  *arrival_time = 23*60+58;
              }
    } else { //Pasadas las 9:45pm 
             *departure_time = 21*60+45;
             *arrival_time = 23*60+58;
    }


}



