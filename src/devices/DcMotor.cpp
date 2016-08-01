#include "DcMotor.h"
using namespace devices;

DcMotor::DcMotor(short enablePin, short control1Pin, short control2Pin) {
	this->enablePin = enablePin;
	this->control1Pin = control1Pin;
	this->control2Pin = control2Pin;

	// TODO: foreach
	short pins[] = { enablePin, control1Pin, control2Pin, 0 };
	for(int i=0; pins[i] != 0; i++)
		pinMode(pins[i], OUTPUT);

	this->goForward();
}

DcMotor::~DcMotor() { }

void DcMotor::start() {
	digitalWrite(this->enablePin, HIGH);
}

void DcMotor::stop() {
	digitalWrite(this->enablePin, LOW);
}

void DcMotor::goForward() {
	this->changeControlPins(HIGH, LOW);
}

void DcMotor::goReverse() {
	this->changeControlPins(LOW, HIGH);
}

void DcMotor::changeControlPins(bool control1, bool control2) {
	digitalWrite(this->control1Pin, control1);
	digitalWrite(this->control2Pin, control2);
}
