/**
 * include is simply copy the code from .h file in this line
 * so we have no need to include string.h and iostream
*/
#include <SimpleParticle.h>

int main()
{
	// two way to construct a new object using default construcor
	SimpleParticle p0;
	SimpleParticle p1 = SimpleParticle();

	// two way to construct by second constructor
	SimpleParticle p2("p2");
	SimpleParticle p3 = SimpleParticle("p3");
	
	/**
	 * two way using pointer to construct a object, and they are the same effect
	 * put a "_" behind the variable to represent pointer
	*/
	SimpleParticle* p0_ = new SimpleParticle();
	SimpleParticle* p1_; // declaring a pointer will not call constructor
	p1_ = new SimpleParticle("p1"); 

	/**
	 * we can use public function to change p0's name
	 * but we cannot using p0._name = "p0" because "_name"
	 * is a private member of p0 object
	*/
	p0.changeName("p0");
	p1.changeName("p1");
	p0_->changeName("p0 pointer");
	p1_->changeName("p1 pointer");

	/**
	 * At the same time, we cannot using "p1.changeMass(0)" to make p1
	 * vanished because it is a public function of p1
	*/
	p1.vanish();

	/**
	 * remember to delete pointer when you don't want to use them
	*/
	delete p0_;
	delete p1_;

	return 0;
	/**
	 * After steping into the last "}", all the object defined inside
	 * this scope("{}") will call the deconstructor automaticly.
	 * You can see the output of this terminal.
	*/
}


