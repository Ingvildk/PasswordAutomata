#include "PasswordAutomata.h"
#include <string>
#include <iostream>
using namespace std;

	Graph1 G1;
	Graph2 G2;
	Graph3 G3;
	Graph4 G4;
	Graph5 G5;
	Graph6 G6;
	Graph7 G7;
	Graph8 G8;
	Graph9 G9;
	Graph10 G10;
	Graph11 G11;
	Graph12 G12;
	Graph13 G13;
	Graph14 G14;
	Graph15 G15;
	Graph16 G16;
	Graph17 G17;
	Graph18 G18;
	Graph19 G19;

bool Graph1::isDigit(int elem) {
	if (elem >= digitStart && elem <= digitEnd) {
		return true;
	} else {
		return false;
	}
}

bool Graph1::isUpperCase(int elem) {
	if (elem >= upperStart && elem <= upperEnd) {
		return true;
	}else {
		return false;
	}
}

bool Graph1::isSpecialCharacter(int elem) {
	if ( (elem >= specialStart1 && elem <=  specialEnd1) ||
			 (elem >= specialStart2 &&	elem <= specialEnd2) ||
			 (elem >= specialStart3 &&	elem <= specialEnd3) ||
			 (elem >= specialStart4 &&	elem <= specialEnd4) ||
			 (elem >= specialStart5 &&	elem <= specialEnd5)  ) 
	{
		return true;
	} else {
		return false;
	}
}

bool Graph1::validLength(int len) {
	if (len >= 8 && len <= 10) {
		return true;
	} else return false;
}

void Graph1::q0(string input) {
	cout << "Graph1 q0" << endl;	
	int len = 0;
	int elem = input[0];
	if (G1.isUpperCase(elem)) {
		G1.q1(input);
	}else if (isDigit(elem)) {
		G1.q2(input);
	}else if(isSpecialCharacter(elem)) {
		G1.q3(input);
	}else {
		G1.q4(input);
	}
}	

void Graph1::q1(string input) {
	cout << "Graph1 q1" << endl;	
	int len = 1;
	int elem = input[1];
	if (G1.isUpperCase(elem)) {
		G14.q0(input);
	}else if (isDigit(elem)) {
		G10.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G9.q0(input);
	}else {
		G8.q0(input);
	}
}

void Graph1::q2(string input) {
	cout << "Graph1 q2" << endl;	
	
	int len = 1;
	int elem = input[1];
	if (G1.isUpperCase(elem)) {
		G10.q0(input);
	}else if (G1.isDigit(elem)) {
		G6.q0(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G14.q0(input);
	}else {
		G7.q0(input);
	}
}	

void Graph1::q3(string input) {
	cout << "Graph1 q3" << endl;			
	int len = 1;
	int elem = input[1];
	if (isUpperCase(elem)) {
		G9.q0(input);
	}else if (isDigit(elem)) {
		G4.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G3.q0(input);
	}else {
		G3.q0(input);
	}
}

void Graph1::q4(string input) {
	cout << "Graph1 q4" << endl;		
	
	int len = 1;
	int elem = input[1];
	if (isUpperCase(elem)) {
		G8.q0(input);
	}else if (isDigit(elem)) {
		G7.q0(input);
	}else if(isSpecialCharacter(elem)) {
		G3.q0(input);
	}else {
		G2.q0(input);
	}
}

void Graph2::q0(string input) {
cout << "Graph2 q0" << endl;		
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G8.q1(input);
	}else if (G1.isDigit(elem)) {
		G7.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q1(input);
	}else {
		G2.q1(input);
	}
}

void Graph2::q1(string input) {
	cout << "Graph2 q1" << endl;			
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G8.q2(input);
	}else if (G1.isDigit(elem)) {
		G7.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q2(input);
	}else {
		G2.q2(input);
	}
}
	
void Graph2::q2(string input){
	cout << "Graph2 q2" << endl;			
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G8.q3(input);
	}else if (G1.isDigit(elem)) {
		G7.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G3.q3(input);
	}else {
		G2.q3(input);
	}	
}


// TRAP STATE
void Graph2::q3(string input) {
	cout << "Graph2 q3" << endl;
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph3::q0(string input) {
	cout << "Graph3 q0" << endl;		
	Graph1 G1;
	Graph2 G2;
	Graph3 G3;
	Graph4 G4;
	Graph5 G5;
	Graph6 G6;
	Graph7 G7;
	Graph8 G8;
	Graph9 G9;
	Graph10 G10;
	Graph11 G11;
	Graph12 G12;
	Graph13 G13;
	Graph14 G14;
	Graph15 G15;
	Graph16 G16;
	Graph17 G17;
	Graph18 G18;
	Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G9.q1(input);
	}else if (G1.isDigit(elem)) {
		G4.q1(input);
	}else {
		G3.q1(input);
	}
}

void Graph3::q1(string input) {
	cout << "Graph3 q1" << endl;		
	Graph1 G1;
	Graph2 G2;
	Graph3 G3;
	Graph4 G4;
	Graph5 G5;
	Graph6 G6;
	Graph7 G7;
	Graph8 G8;
	Graph9 G9;
	Graph10 G10;
	Graph11 G11;
	Graph12 G12;
	Graph13 G13;
	Graph14 G14;
	Graph15 G15;
	Graph16 G16;
	Graph17 G17;
	Graph18 G18;
	Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G9.q2(input);
	}else if (G1.isDigit(elem)) {
		G4.q2(input);
	}else {
		G3.q2(input);
	}
}

void Graph3::q2(string input) {
	cout << "Graph3 q2" << endl;		
	Graph1 G1;
	Graph2 G2;
	Graph3 G3;
	Graph4 G4;
	Graph5 G5;
	Graph6 G6;
	Graph7 G7;
	Graph8 G8;
	Graph9 G9;
	Graph10 G10;
	Graph11 G11;
	Graph12 G12;
	Graph13 G13;
	Graph14 G14;
	Graph15 G15;
	Graph16 G16;
	Graph17 G17;
	Graph18 G18;
	Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G9.q3(input);
	}else if (G1.isDigit(elem)) {
		G4.q3(input);
	}else {
		G3.q3(input);
	}
}

void Graph3::q3(string input) {
	cout << "Graph3 q3" << endl;		
	Graph1 G1;
	Graph2 G2;
	Graph3 G3;
	Graph4 G4;
	Graph5 G5;
	Graph6 G6;
	Graph7 G7;
	Graph8 G8;
	Graph9 G9;
	Graph10 G10;
	Graph11 G11;
	Graph12 G12;
	Graph13 G13;
	Graph14 G14;
	Graph15 G15;
	Graph16 G16;
	Graph17 G17;
	Graph18 G18;
	Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G9.q4(input);
	}else if (G1.isDigit(elem)) {
		G4.q4(input);
	}else {
		G3.q4(input);
	}
}

void Graph3::q4(string input) {
	cout << "Graph3 q4" << endl;
	
	int len = 7;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph4::q0(string input) {
	cout << "Graph4 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G12.q1(input);
	}else if (G1.isDigit(elem)) {
		G5.q1(input);
	}else {
		G4.q1(input);
	}
}

void Graph4::q1(string input) {
	cout << "Graph4 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G12.q2(input);
	}else if (G1.isDigit(elem)) {
		G5.q2(input);
	}else {
		G4.q2(input);
	}
}

void Graph4::q2(string input) {
	cout << "Graph2 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G12.q3(input);
	}else if (G1.isDigit(elem)) {
		G5.q3(input);
	}else {
		G4.q3(input);
	}
}

void Graph4::q3(string input) {
	cout << "Graph4 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G12.q4(input);
	}else if (G1.isDigit(elem)) {
		G5.q4(input);
	}else {
		G4.q4(input);
	}
}

void Graph4::q4(string input) {
	cout << "Graph4 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G12.q5(input);
	}else if (G1.isDigit(elem)) {
		G5.q5(input);
	}else {
		G4.q5(input);
	}
}


void Graph4::q5(string input) {
	cout << "Graph4 q5" << endl;	
	int len = 8;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph5::q0(string input) {
	cout << "Graph5 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G13.q1(input);
	}else {
		G5.q1(input);
	}
}

void Graph5::q1(string input) {
	cout << "Graph5 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G13.q3(input);
	}else {
		G5.q2(input);
	}
}

void Graph5::q2(string input) {
	cout << "Graph5 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G13.q3(input);
	}else {
		G5.q3(input);
	}
}

void Graph5::q3(string input) {
	cout << "Graph5 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G13.q4(input);
	}else {
		G5.q4(input);
	}
}

void Graph5::q4(string input) {
	cout << "Graph5 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G13.q5(input);
	}else {
		G5.q5(input);
	}
}

void Graph5::q5(string input) {
	cout << "Graph5 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isUpperCase(elem)) {
		G13.q6(input);
	}else {
		G5.q6(input);
	}
}


void Graph5::q6(string input) {
	cout << "Graph5 q7" << endl;		
	int len = 9;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph6::q0(string input) {
	cout << "Graph6 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G11.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q1(input);
	}else {
		G6.q1(input);
	}
}

void Graph6::q1(string input) {
	cout << "Graph6 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G11.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q2(input);
	}else {
		G6.q2(input);
	}
}
	
void Graph6::q2(string input){
	cout << "Graph6 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G11.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q3(input);
	}else {
		G6.q3(input);
	}	
}

void Graph6::q3(string input) {
	cout << "Graph6 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G11.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q4(input);
	}else {
		G6.q4(input);
	}	
}

void Graph6::q4(string input) {
	cout << "Graph6 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G11.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G5.q5(input);
	}else {
		G6.q5(input);
	}	
}


// TRAP STATE
void Graph6::q5(string input) {
	cout << "Graph6 q5" << endl;	
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph7::q0(string input) {
	cout << "Graph7 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G10.q1(input);
	}else if (G1.isDigit(elem)) {
		G6.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G4.q1(input);
	}else {
		G7.q1(input);
	}
}

void Graph7::q1(string input) {
	cout << "Graph7 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G10.q2(input);
	}else if (G1.isDigit(elem)) {
		G6.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G4.q2(input);
	}else {
		G7.q2(input);
	}
}
	
void Graph7::q2(string input){
	cout << "Graph7 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G10.q3(input);
	}else if (G1.isDigit(elem)) {
		G6.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G4.q3(input);
	}else {
		G7.q3(input);
	}	
}

void Graph7::q3(string input) {
	cout << "Graph3 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G10.q4(input);
	}else if (G1.isDigit(elem)) {
		G6.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G4.q4(input);
	}else {
		G7.q4(input);
	}	
}



// TRAP STATE
void Graph7::q4(string input) {
	cout << "Graph7 q4" << endl;	
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph8::q0(string input) {
	cout << "Graph8 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G14.q1(input);
	}else if (G1.isDigit(elem)) {
		G10.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G9.q1(input);
	}else {
		G8.q1(input);
	}
}

void Graph8::q1(string input) {
	cout << "Graph8 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G14.q2(input);
	}else if (G1.isDigit(elem)) {
		G10.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G9.q2(input);
	}else {
		G8.q2(input);
	}
}
	
void Graph8::q2(string input){
	cout << "Graph8 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G14.q3(input);
	}else if (G1.isDigit(elem)) {
		G10.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G9.q3(input);
	}else {
		G8.q3(input);
	}
}

void Graph8::q3(string input) {
	cout << "Graph8 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G14.q4(input);
	}else if (G1.isDigit(elem)) {
		G10.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G9.q4(input);
	}else {
		G8.q4(input);
	}
}

// TRAP STATE
void Graph8::q4(string input) {
	cout << "Graph8 q4" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph9::q0(string input) {
	cout << "Graph9 q0" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G15.q1(input);
	}else if (G1.isDigit(elem)) {
		G12.q1(input);
	}else {
		G9.q1(input);
	}
}

void Graph9::q1(string input) {
	cout << "Graph9 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G15.q2(input);
	}else if (G1.isDigit(elem)) {
		G12.q2(input);
	}else {
		G9.q2(input);
	}
}

void Graph9::q2(string input) {
	cout << "Graph9 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G15.q3(input);
	}else if (G1.isDigit(elem)) {
		G12.q3(input);
	}else {
		G9.q3(input);
	}
}

void Graph9::q3(string input) {
	cout << "Graph9 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G15.q4(input);
	}else if (G1.isDigit(elem)) {
		G12.q4(input);
	}else {
		G9.q4(input);
	}
}

void Graph9::q4(string input) {
	cout << "Graph9 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G15.q5(input);
	}else if (G1.isDigit(elem)) {
		G12.q5(input);
	}else {
		G9.q5(input);
	}
}

void Graph9::q5(string input) {
	cout << "Graph9 q5" << endl;		
	int len = 8;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph10::q0(string input) {
	cout << "Graph10 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G17.q1(input);
	}else if (G1.isDigit(elem)) {
		G11.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G12.q1(input);
	}else {
		G10.q1(input);
	}
}

void Graph10::q1(string input) {
	cout << "Graph10 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G17.q2(input);
	}else if (G1.isDigit(elem)) {
		G11.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G12.q2(input);
	}else {
		G10.q2(input);
	}
}
	
void Graph10::q2(string input){
	cout << "Graph10 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G17.q3(input);
	}else if (G1.isDigit(elem)) {
		G11.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G12.q3(input);
	}else {
		G10.q3(input);
	}
}

void Graph10::q3(string input) {
	cout << "Graph10 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G17.q4(input);
	}else if (G1.isDigit(elem)) {
		G11.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G12.q4(input);
	}else {
		G10.q4(input);
	}
}

void Graph10::q4(string input) {
	cout << "Graph10 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G17.q5(input);
	}else if (G1.isDigit(elem)) {
		G11.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G12.q5(input);
	}else {
		G10.q5(input);
	}
}


// TRAP STATE
void Graph10::q5(string input) {
	cout << "Graph10 q5" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph11::q0(string input) {
	cout << "Graph11 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G18.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q1(input);
	}else {
		G11.q1(input);
	}
}

void Graph11::q1(string input) {
	cout << "Graph11 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G18.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q2(input);
	}else {
		G11.q2(input);
	}
}
	
void Graph11::q2(string input){
	cout << "Graph11 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G18.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q3(input);
	}else {
		G11.q3(input);
	}	
}

void Graph11::q3(string input) {
	cout << "Graph11 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G18.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q4(input);
	}else {
		G11.q4(input);
	}	
}

void Graph11::q4(string input) {
	cout << "Graph11 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G18.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q5(input);
	}else {
		G11.q5(input);
	}	
}

void Graph11::q5(string input) {
	cout << "Graph11 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isUpperCase(elem)) {
		G18.q6(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G13.q6(input);
	}else {
		G11.q6(input);
	}	
}


// TRAP STATE
void Graph11::q6(string input) {
	cout << "Graph11 q6" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph12::q0(string input) {
	cout << "Graph12 q0" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G16.q1(input);
	}else if (G1.isDigit(elem)) {
		G13.q1(input);
	}else {
		G12.q1(input);
	}
}

void Graph12::q1(string input) {
	cout << "Graph12 q1" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G16.q3(input);
	}else if (G1.isDigit(elem)) {
		G13.q3(input);
	}else {
		G12.q2(input);
	}
}

void Graph12::q2(string input) {
	cout << "Graph12 q2" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G16.q3(input);
	}else if (G1.isDigit(elem)) {
		G13.q3(input);
	}else {
		G12.q3(input);
	}
}

void Graph12::q3(string input) {
	cout << "Graph12 q3" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G16.q4(input);
	}else if (G1.isDigit(elem)) {
		G13.q4(input);
	}else {
		G12.q4(input);
	}
}

void Graph12::q4(string input) {
	cout << "Graph12 q4" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G16.q5(input);
	}else if (G1.isDigit(elem)) {
		G13.q5(input);
	}else {
		G12.q5(input);
	}
}

void Graph12::q5(string input) {
	cout << "Graph12 q5" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isUpperCase(elem)) {
		G16.q6(input);
	}else if (G1.isDigit(elem)) {
		G13.q6(input);
	}else {
		G12.q6(input);
	}
}


void Graph12::q6(string input) {
	cout << "Graph12 q6" << endl;		
	int len = 8;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph13::q0(string input) {
	cout << "Graph13 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isUpperCase(elem)) {
		G19.q1(input);
	}else {
		G13.q1(input);
	}
}

void Graph13::q1(string input) {
	cout << "Graph13 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isUpperCase(elem)) {
		G19.q2(input);
	}else {
		G13.q2(input);
	}
}

void Graph13::q2(string input) {
		cout << "Graph13 q2" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isUpperCase(elem)) {
		G19.q3(input);
	}else {
		G13.q3(input);
	}
}

void Graph13::q3(string input) {
	cout << "Graph13 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isUpperCase(elem)) {
		G19.q4(input);
	}else {
		G13.q4(input);
	}
}

void Graph13::q4(string input) {
	cout << "Graph13 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isUpperCase(elem)) {
		G19.q5(input);
	}else {
		G13.q5(input);
	}
}

void Graph13::q5(string input) {
	cout << "Graph13 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isUpperCase(elem)) {
		G19.q6(input);
	}else {
		G13.q6(input);
	}
}

void Graph13::q6(string input) {
	cout << "Graph13 q6" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 8;
	int elem = input[8];
	if (G1.isUpperCase(elem)) {
		G19.q7(input);
	}else {
		G13.q7(input);
	}
}


void Graph13::q7(string input) {
	cout << "Graph13 q7" << endl;		
	int len = 10;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph14::q0(string input) {
	cout << "Graph14 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isDigit(elem)) {
		G17.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G15.q1(input);
	}else {
		G14.q1(input);
	}
}

void Graph14::q1(string input) {
	cout << "Graph14 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isDigit(elem)) {
		G17.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G15.q2(input);
	}else {
		G14.q2(input);
	}
}
	
void Graph14::q2(string input){
	cout << "Graph14 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isDigit(elem)) {
		G17.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G15.q3(input);
	}else {
		G14.q3(input);
	}
}

void Graph14::q3(string input) {
	cout << "Graph14 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isDigit(elem)) {
		G17.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G15.q4(input);
	}else {
		G14.q4(input);
	}
}

void Graph14::q4(string input) {
	cout << "Graph14 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isDigit(elem)) {
		G17.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G15.q5(input);
	}else {
		G14.q5(input);
	}
}


// TRAP STATE
void Graph14::q5(string input) {
	cout << "Graph14 q5" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph15::q0(string input) {
	cout << "Graph15 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isDigit(elem)) {
		G16.q1(input);
	}else {
		G15.q1(input);
	}
}

void Graph15::q1(string input) {
	cout << "Graph15 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isDigit(elem)) {
		G16.q3(input);
	}else {
		G15.q2(input);
	}
}

void Graph15::q2(string input) {
	cout << "Graph15 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isDigit(elem)) {
		G16.q3(input);
	}else {
		G15.q3(input);
	}
}

void Graph15::q3(string input) {
	cout << "Graph15 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isDigit(elem)) {
		G16.q4(input);
	}else {
		G15.q4(input);
	}
}

void Graph15::q4(string input) {
	cout << "Graph15 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isDigit(elem)) {
		G16.q5(input);
	}else {
		G15.q5(input);
	}
}

void Graph15::q5(string input) {
	cout << "Graph15 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isDigit(elem)) {
		G16.q6(input);
	}else {
		G15.q6(input);
	}
}


void Graph15::q6(string input) {
	cout << "Graph15 q6" << endl;		
	int len = 8;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph16::q0(string input) {
		cout << "Graph16 q0" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isDigit(elem)) {
		G19.q1(input);
	}else {
		G16.q1(input);
	}
}

void Graph16::q1(string input) {
	cout << "Graph16 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isDigit(elem)) {
		G19.q3(input);
	}else {
		G16.q2(input);
	}
}

void Graph16::q2(string input) {
	cout << "Graph16 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isDigit(elem)) {
		G19.q3(input);
	}else {
		G16.q3(input);
	}
}

void Graph16::q3(string input) {
	cout << "Graph16 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isDigit(elem)) {
		G19.q4(input);
	}else {
		G16.q4(input);
	}
}

void Graph16::q4(string input) {
	cout << "Graph16 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isDigit(elem)) {
		G19.q5(input);
	}else {
		G16.q5(input);
	}
}

void Graph16::q5(string input) {
	cout << "Graph16 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isDigit(elem)) {
		G19.q6(input);
	}else {
		G16.q6(input);
	}
}

void Graph16::q6(string input) {
	cout << "Graph16 q6" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isDigit(elem)) {
		G19.q7(input);
	}else {
		G16.q7(input);
	}
}


void Graph16::q7(string input) {
	cout << "Graph16 q7" << endl;		
	int len = 9;
	cout << "Error Not a Valid Password"<< endl;
	return;
}

void Graph17::q0(string input) {
	cout << "Graph17 q1" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (G1.isDigit(elem)) {
		G18.q1(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q1(input);
	}else {
		G17.q1(input);
	}
}

void Graph17::q1(string input) {
	cout << "Graph17 q1" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (G1.isDigit(elem)) {
		G18.q2(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q2(input);
	}else {
		G17.q2(input);
	}
}
	
void Graph17::q2(string input){
	cout << "Graph17 q2" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (G1.isDigit(elem)) {
		G18.q3(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q3(input);
	}else {
		G17.q3(input);
	}
}

void Graph17::q3(string input) {
	cout << "Graph17 q3" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (G1.isDigit(elem)) {
		G18.q4(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q4(input);
	}else {
		G17.q4(input);
	}
}

void Graph17::q4(string input) {
	cout << "Graph17 q4" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (G1.isDigit(elem)) {
		G18.q5(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q5(input);
	}else {
		G17.q5(input);
	}
}

void Graph17::q5(string input) {
	cout << "Graph17 q5" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (G1.isDigit(elem)) {
		G18.q6(input);
	}else if(G1.isSpecialCharacter(elem)) {
		G16.q6(input);
	}else {
		G17.q6(input);
	}
}

// TRAP STATE
void Graph17::q6(string input) {
	cout << "Graph17 q6" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}

void Graph18::q0(string input) {
	cout << "Graph18 q0" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if(G1.isSpecialCharacter(elem)) {
		G19.q1(input);
	}else {
		G18.q1(input);
	}
}

void Graph18::q1(string input) {
	cout << "Graph18 q1" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if(G1.isSpecialCharacter(elem)) {
		G19.q2(input);
	}else {
		G18.q2(input);
	}
}
	
void Graph18::q2(string input){
	cout << "Graph18 q2" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if(G1.isSpecialCharacter(elem)) {
		G19.q3(input);
	}else {
		G18.q3(input);
	}	
}

void Graph18::q3(string input) {
	cout << "Graph18 q3" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if(G1.isSpecialCharacter(elem)) {
		G19.q4(input);
	}else {
		G18.q4(input);
	}	
}

void Graph18::q4(string input) {
	cout << "Graph18 q4" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if(G1.isSpecialCharacter(elem)) {
		G19.q5(input);
	}else {
		G18.q5(input);
	}	
}

void Graph18::q5(string input) {
	cout << "Graph18 q5" << endl;	
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if(G1.isSpecialCharacter(elem)) {
		G19.q6(input);
	}else {
		G18.q6(input);
	}	
}

void Graph18::q6(string input) {
cout << "Graph18 q6" << endl;			
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 8;
	int elem = input[8];
	if(G1.isSpecialCharacter(elem)) {
		G19.q7(input);
	}else {
		G18.q7(input);
	}	
}

// TRAP STATE
void Graph18::q7(string input) {
	int elem = input[9];
	cout << elem << endl;
	cout << "Graph18 q7" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}
void Graph19::q0(string input) {
	cout << "Graph19 q0" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 2;
	int elem = input[2];
	if (input.length() == 3) {
		cout << "Error: The password was too short" << endl;
		return;
	} else {
		G19.q1(input);
	}
}

void Graph19::q1(string input) {
	cout << "Graph19 q1" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 3;
	int elem = input[3];
	if (input.length() == 4) {
		cout << "Error: The password was too short" << endl;
		return;
	}else {
		G19.q2(input);
	}
}
	
void Graph19::q2(string input){
	cout << "Graph19 q2" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 4;
	int elem = input[4];
	if (input.length() == 5) {
		cout << "Error: The password was too short" << endl;
		return;
	}else {
		G19.q3(input);
	}	
}

void Graph19::q3(string input) {
	cout << "Graph19 q3" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 5;
	int elem = input[5];
	if (input.length() == 6) {
		cout << "Error: The password is too short" << endl;
		return;
	}else {
		G19.q4(input);
	}	
}

void Graph19::q4(string input) {
	cout << "Graph19 q4" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 6;
	int elem = input[6];
	if (input.length() == 7) {
		cout << "Error: The password is too short" << endl;
		return;
	}else {
		G19.q5(input);
	}	
}

void Graph19::q5(string input) {
	cout << "Graph19 q5" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 7;
	int elem = input[7];
	if (input.length() == 8) {
		cout << "The password is valid" << endl;
		return;
	}else {
		G19.q6(input);
	}	
}

void Graph19::q6(string input) {
	cout << "Graph19 q6" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 8;
	int elem = input[8];
	if (input.length() == 9) {
		cout << "The password is valid!" << endl;
		return;
	}else {
		G19.q7(input);
	}	
}

void Graph19::q7(string input) {
	cout << "Graph19 q7" << endl;		
Graph1 G1;
Graph2 G2;
Graph3 G3;
Graph4 G4;
Graph5 G5;
Graph6 G6;
Graph7 G7;
Graph8 G8;
Graph9 G9;
Graph10 G10;
Graph11 G11;
Graph12 G12;
Graph13 G13;
Graph14 G14;
Graph15 G15;
Graph16 G16;
Graph17 G17;
Graph18 G18;
Graph19 G19;	
	int len = 9;
	int elem = input[9];
	if (input.length() == 10) {
		cout << "The password is valid!" << endl;
		return;
	}else {
		G19.q8(input);
	}	
}

// TRAP STATE
void Graph19::q8(string input) {
	cout << "Graph19 q8" << endl;		
	cout << "Error Not a Valid Password" << endl;
	return;
}






















