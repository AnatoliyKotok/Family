#pragma once
#include<iostream>
#include<string>

using namespace std;

class Grangpa
{
	string name = "Ivan";
public:
	virtual void Sleep() {
		cout << "Grangpa  " << name << "  is sleeping" << endl;
	}
};

class Daddy :public Grangpa {
public:
	void Sleep() override
	{
		cout << "Sleep Daddy" << endl;
	};
	virtual void Walk() {
		cout << "Walk Daddy" << endl;
	};
};

class Son :public Daddy {
public:

	Son() = default;
	void Sleep()override {
		cout << "Sleep Son" << endl;
	};
	void Walk() override {
		cout << "Walk Son" << endl;
	};
	virtual void Play() {
		cout << "Play Son" << endl;
	};
};