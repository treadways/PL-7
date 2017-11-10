#include <iostream>
#include <string>

using namespace std;

float calculateRectMoI (float base, float height), calculateCirMoI(float radius), calculateTriMoI(float base, float height);

int main() {
	cout << "Welcome to the area moment of inertia calculator by Shane Treadway." << endl;
	cout << "===================================================================" << endl;

	string repeat = "yes";
	cout << " ";
	while (repeat == "yes") {
		char shape;
		float baseR, heightR, baseT, heightT, radiusC, rectMoI, cirMoI, triMoI;

		cout << "What shape is the beam's cross-section? (r:Rectangle, t:Triangle, c:Circle) : ";
		cin >> shape;
		cout << " " << endl;

		char r, t, c;

		switch (shape)  {
		case 'r':

			cout << "Please enter the dimentions of you beam: " << endl;
			cout << " ";
			cout << "Base: ";
			cin >> baseR;
			cout << "Height";
			cin >> heightR;

			rectMoI = calculateRectMoI(baseR, heightR);

			cout << "The moment of inertia is: " << rectMoI << endl;

			cout << "Would you like to calculate another moment of inertia? (yes/no): ";
			cin >> repeat;

			break;

		}
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
	MoI = PI * radius * radius * radius * radius / 4;
	return MoI;
}

float calculateTriMoI(float base, float height) {
	float MoI;
	MoI = base * height * height * height / 12;
	return MoI;
}
