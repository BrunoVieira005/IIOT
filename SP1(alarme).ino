#define POWER_BUTTON 0
#define BAR_SENSOR 1
#define WINDOW_SENSOR1 2
#define WINDOW_SENSOR2 3
#define ROOM_SENSOR 4
#define KITCHEN_SENSOR 5
#define GARDEN_SENSOR 6
#define HALL_SENSOR 7
#define ALARM 8

bool POWER_BUTTON = 0, BAR_SENSOR = 0, WINDOW_SENSOR1 = 0
bool ROOM_SENSOR = 0, KITCHEN_SENSOR = 0, WINDOW_SENSOR2 = 0
bool GARDEN_SENSOR = 0, HALL_SENSOR = 0, ALARM = 0

// Configurações 
void setup(){
    pinMode(BAR_SENSOR, INPUT_PULLUP) 
    pinMode(WINDOW_SENSOR1, INPUT_PULLUP)
    pinMode(WINDOW_SENSOR2, INPUT_PULLUP) 
    pinMode(ROOM_SENSOR, INPUT_PULLUP) 
    pinMode(KITCHEN_SENSOR, INPUT_PULLUP) 
    pinMode(GARDEN_SENSOR), INPUT_PULLUP
    pinMode(HALL_SENSOR, INPUT_PULLUP);
    pinMode(ALARM, OUTPUT); 
}

// Lógica 
void loop(){
if digitalRead(POWER_BUTTON) == HIGH{
    if digitalRead(BAR_SENSOR) == LOW || (WINDOW_SENSOR1) == LOW || (WINDOW_SENSOR2) == LOW 
        || (ROOM_SENSOR) == HIGH || (KITCHEN_SENSOR) == HIGH || (GARDEN_SENSOR) == HIGH
        || (HALL_SENSOR) == HIGH {
            digitalWrite(ALARM) == HIGH;
        }
    }
    else {
        digitalWrite(ALARM) == LOW;
    }
}