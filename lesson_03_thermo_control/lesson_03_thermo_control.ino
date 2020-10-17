#define THERMO_PIN A4
#define SOURCE     5.0
#define R          100000
#define R0         110000

#define TERM_DIFF  273.15
#define T0         25 + TERM_DIFF
#define B          3950

void setup() {
  Serial.begin(9600);

}
int adc_signal;
float adc_to_volt = 0.0;
float tr = 0.0;
float k_temperature = 0;
float c_temperature = 0;


void loop() {
  adc_signal =  analogRead(THERMO_PIN);
 
  adc_to_volt = SOURCE / 1023 * adc_signal;

  tr = R * (1023.0 / adc_signal - 1);

  k_temperature = T0 * B / (B + T0*log(tr/R0));
  c_temperature = k_temperature - TERM_DIFF;
  
  Serial.println(c_temperature);

  
  delay(1000);
  
}
