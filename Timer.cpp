hw_timer_t * Timer = NULL;
portMUX_TYPE timerMux = portMUX_INITIALIZER_UNLOCKED;

void setup(){
  Timer = timerBegin(0, 80, true);
}

void main(){
 time1 = timerReadSeconds(Timer);
 
 while(1){
 time2 = timerReadSeconds(Timer);
 }
}
