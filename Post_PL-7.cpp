#include <iostream>

using namespace std;

float calculateRectMoI (float base, float height), calculateCirMoI(float radius), calculateTriMoI(float base, float height);

int main() {

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
