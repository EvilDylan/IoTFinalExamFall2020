
#include <iostream>
#include <unistd.h>
#include <sstream>
#include "GPIO.h"
#include "AnalogIn.h"

using namespace exploringBB;
using namespace std;

int main(){
	GPIO outLEDGPIO(60), inButtonGPIO(46);
	outLEDGPIO.setDirection(OUTPUT);
	inButtonGPIO.setDirection(INPUT);
	AnalogIn Resistors(1), Temp(0);
	//int ADCval;

		cout << "The pushbutton value is:" << inButtonGPIO.getValue() << endl;
		if(inButtonGPIO.getValue() == HIGH){
			// Run ADC resistors
			//ADCval = Temp.readADCsample;
			cout << "Temperature value is:" << Temp.readADCsample() << endl;
			// Blink twice
			for (int i=0; i<2; i++){
				outLEDGPIO.setValue(HIGH);
				usleep(200000);
				outLEDGPIO.setValue(LOW);
				usleep(300000);
			}
		}
		else{
			// Run ADC thermistor
			//ADCval = Resistors.readADCsample;
			cout << "Resistor value is:" << Resistors.readADCsample() << endl;
			// Blink twice
			outLEDGPIO.setValue(HIGH);
			usleep(200000);
			outLEDGPIO.setValue(LOW);
			usleep(300000);
		}
	
}
