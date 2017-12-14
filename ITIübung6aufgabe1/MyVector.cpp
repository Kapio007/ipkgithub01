#include <math.h>
//Konstruktoren
MyVector::MyVector(){
	x = 0;
	y = 0;
	z = 0;
}

MyVector::MyVector(float newX, float newY, float newZ){
	x = newX;
	y = newY;
	z = newZ;
}

//Destruktor
MyVector::~MyVector(){
}

//Print
void MyVector::print(){
	std::cout<<"("<<x<<", "<<y<<", "<<z<<")"<<std::endl;
}

//Set + Get Values
void MyVector::setValues(float newX, float newY, float newZ){
	x = newX;
	y = newY;
	z = newZ;
}

void MyVector::setX(float newX){
	x = newX;
}

void MyVector::setY(float newY){
	y = newY;
}

void MyVector::setZ(float newZ){
	z = newZ;
}

float MyVector::getX(){
	return x;
}
float MyVector::getY(){
	return y;
}
float MyVector::getZ(){
	return z;
}

//Vektoroperationen
//Länge eines Vektors
float MyVector::length() const{
	float res = sqrt(pow(x,2.) + pow(y,2.) + pow(z,2.));
	return res;
}
//Addition
MyVector MyVector::add(const MyVector& vec){
	MyVector res(x + vec.x,y + vec.y ,z + vec.z);
	return	res;
}
//Subtraktion
MyVector MyVector::subtract(const MyVector& vec){
	MyVector res(x - vec.x,y - vec.y ,z - vec.z);
	return	res;
}
//Mult mit Skalar
MyVector MyVector::mult(float scale){
	MyVector res(scale * x, scale * y, scale * z);
	return res;
}
//Skalarprodukt
float MyVector::dot(const MyVector& vec){
	float res = x * vec.x + y * vec.y + z * vec.z;
	return res;
}
//Vektorprodukt
MyVector MyVector::cross(const MyVector& vec){
	MyVector res(y*vec.z - z*vec.y, z*vec.x - x*vec.z, x*vec.y - y*vec.x);
	return res;
}
//Winkel
float MyVector::angle(const MyVector& vec){
	return acos(this->dot(vec)/(this->length() * vec.length()));
}
//Aufgespannte Fläche
float MyVector::area(const MyVector& vec){
	return (this->cross(vec)).length(); //Gibt die Länge des im Kreuzprodukt entstandenen Vektors. Dies entspricht der Fläche des aufgespannten Parallelograms.
}
//Lage von Vektoren
bool MyVector::isOrthogonal(const MyVector& vec){
	if (this->dot(vec) == 0){ //Wenn Skalarprodukt 0, dann Orthogonale Vektoren
		return true;
	}
	else return false;
}

bool MyVector::isParallel(const MyVector& vec){
	float res = this->angle(vec);
	if (res == 0) return true; //Wenn der Winkel 0 Radian dann sind die Geraden parallel
	else return false;
}
