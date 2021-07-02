/**
 * In general, all the declaration of class and its members are in 
 * .h file and .cpp file with same name has implements of class member
 * function. This class is too simple so I just put they together.
*/

#ifndef __SIMPLEPARTICLE__
#define __SIMPLEPARTICLE__

#include <string.h>
#include <iostream>

class SimpleParticle
{
/** 
 * The private members including function and object
 * This kinds of members can only be used in the inner of this class
 * There is a unwritten rule that the name of private objects shoule
 * add a "_" ahead, just like following. 
*/
private:
	std::string _name; // the name of particle
	std::string _type; // the type in string, but we can use enumeration type
	double _mass; // the mass of this particle

	/**
	 * This function is only called by other member functions in this class
	*/
	void changeMass(double mass){
		_mass -= mass;
	};

public:
	// The default constructor without parameter
  SimpleParticle()
	{
		std::cout << "The default constructor" << std::endl;
	};

	// The overloaded function of default constructor
	SimpleParticle(const std::string& name)
	{
		_name = name;
		std::cout << "The constructor with single name parameter" << std::endl;
	};

	/**
	 * constructor by member initialization list
	 * just input the parameter and set it to the member of this class
	 * the effect is equivalent to using "=" in the constructor function
	*/
	SimpleParticle(const std::string& name, const std::string& type)
	:_name(name),
	 _type(type){
		std::cout << "The constructor with member initialization list" << std::endl;
	 };

	SimpleParticle(const SimpleParticle& other)
	:_name(other._name),
	_type(other._type){
		std::cout << "The constructor by other objects" << std::endl;
	}

	/**
	 * It is a public function, I will show you the difference between private one
	*/
	void changeName(const std::string& name)
	{
		_name = name;
		std::cout << "Change name to " << _name << std::endl;
	};

	inline std::string getName() const
	{
		return _name;
	}

	/**
	 * This is a public function, and private functions can be called inside in
	 * this function or other private function. 
	*/
	void vanish()
	{
		changeMass(0);
		std::cout << "Particle " << _name  << " is vanished" << std::endl;
	};

	SimpleParticle operator + (const SimpleParticle& other){

	}

  ~SimpleParticle()
  {
    std::cout << "Particle " << _name << " has been terminated" << std::endl;
  };
};



#endif