#include "Activity1.h"

/**
 * @brief Seating Checking and connfiguring the seat, heater and LED
 *
 */
void SEAT_CHECKING(){
    DDRD|=(1<<PD0); //Setting PDO pin
    DDRD&=~(1<<PD1); //clearing PD1 pin
    PORTD|=(1<<PD1); //Setting PD1 pin
    DDRD&=~(1<<PD2); //clearing PD2 pin
    PORTD|=(1<<PD2); //Setting PD2 pin
}
