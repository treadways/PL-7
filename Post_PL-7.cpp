#include <iostream>
#include <string>

using namespace std;

float calculateRectMoI (float base, float height), calculateCirMoI(float radius), calculateTriMoI(float base, float height);

int main() {
	cout << "Welcome to the area moment of inertia calculator by Shane Treadway." << endl;
	cout << "=============================================================================" << endl;

	string repeat = "yes";
	cout << " " << endl;
	while (repeat == "yes") {
		char shape;
		float baseR, heightR, baseT, heightT, radiusC, rectMoI, cirMoI, triMoI;

		cout << "What shape is the beam's cross-section? (r:Rectangle, t:Triangle, c:Circle): ";
		cin >> shape;
		cout << " " << endl;

		switch (shape)  {

		case 'r':

			cout << "Please enter the dimensions of you beam in mm: " << endl;
			cout << "Base: ";
			cin >> baseR;
			cout << "Height: ";
			cin >> heightR;

			rectMoI = calculateRectMoI(baseR, heightR);

			cout << " " << endl;
			cout << "The area moment of inertia is: " << rectMoI << "mm" << endl;

			break;

		case 't':

			cout << "Please enter the dimensions of you beam in mm: " << endl;
			cout << "Base: ";
			cin >> baseT;
			cout << "Height: ";
			cin >> heightT;

			triMoI = calculateTriMoI(baseT, heightT);

			cout << " " << endl;
			cout << "The area moment of inertia is: " << triMoI << "mm" << endl;

			break;

		case 'c':

			cout << "Please enter the dimensions of you beam in mm: " << endl;
			cout << "Radius: ";
			cin >> radiusC;

			cirMoI = calculateCirMoI(radiusC);

			cout << " " << endl;
			cout << "The area moment of inertia is: " << cirMoI << "mm" << endl;

			break;
		}

		cout << " " << endl;
		cout << "Would you like to calculate another moment of inertia? (yes/no): ";
		cin >> repeat;
		cout << "=============================================================================" << endl;
		cout << " " << endl;
	}
}

float calculateRectMoI(float base, float height) {
	float MoI;
	MoI = base * height * height * height / 12;
	return MoI;
}

float calculateCirMoI(float radius) {
	float MoI;
	float PI = 3.1415926;
	MoI = radius * radius * radius * radius * PI / 4;
	return MoI;
}

float calculateTriMoI(float base, float height) {
	float MoI;
	MoI = base * height * height * height / 12;
	return MoI;
}
