#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>

#define G 6.67e-11
#define dT 1e-3

struct Vector3d
{
	/** 
	 * This struct represents 3D vector
	 * In this project, it used as position, force and velocity.
	 */
	double x;
	double y;
	double z;

	Vector3d()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	/** 
	 * The construction of 3D vector
	 * input the x, y, z of vector
	 */
	Vector3d(double x_, double y_, double z_)
	{
		x = x_;
		y = y_;
		z = z_;
	};

	/**
	 * operator overload function of "+"
	 * represents the sum of two vectors
	 */
	Vector3d operator + (const Vector3d& other)
	{
		double dx = x + other.x;
		double dy = y + other.y;
		double dz = z + other.z;
		return Vector3d(dx, dy, dz);
	};

	/**
	 * operator overload function of "-"
	 * represents the subtraction of two vectors
	 */
	Vector3d operator - (const Vector3d& other)
	{
		double dx = x - other.x;
		double dy = y - other.y;
		double dz = z - other.z;
		return Vector3d(dx, dy, dz);
	};

	/**
	 * operator overload function of "*"
	 * multiply vectors with a number
	 */
	Vector3d operator * (const float& m)
	{
		return Vector3d(m * x, m * y, m * z);
	};

	/**
	 * operator overload function of "/"
	 * vectors are divided with number
	 */
	Vector3d operator / (const float& m)
	{
		return Vector3d(x/m, y/m, z/m);
	};

	/**
	 * operator overload function of "-"
	 * the opposite of vector
	 */
	Vector3d operator - ()
	{
		return Vector3d(-x, -y, -z);
	};

	/**
	 * The 1-norm of this vector
	 */
	double Norm1()
	{
		return sqrt(Norm2());
	};

	/**
	 * The 2-norm of this vector
	 */
	double Norm2()
	{
		return pow(x, 2) + pow(y, 2) + pow(z, 2);
	};

	/**
	 * normalize vector
	 */
	void normalization()
	{
		double norm = Norm1();
		x = x / norm;
		y = y / norm;
		z = z / norm;
	};

	/**
	 * normalize vector and multiply number n
	 */
	void setNorm(double n)
	{
		normalization();
		x = n * x;
		y = n * y;
		z = n * z;
	};
};

/**
 * the class of particle
 */
struct particle
{
	std::string n; // the name of particle
	double m; // the name of particle
	Vector3d position; // the position of this particle
	Vector3d velocity; // the velocity of this particle

	particle(double x, double y, double z, double mass, const std::string& name)
	{
		n = name;
		m = mass;
		position = Vector3d(x, y, z);
		velocity = Vector3d(0, 0, 0);
	};

	/**
	 * caculate the force that this particle gives to
	 * another one
	 * @parm: the reference of another particle
	 */
	Vector3d effect(const particle& other)
	{
		Vector3d force = position - other.position;
		force.setNorm(G * m * other.m / force.Norm2());
		return force;
	};
	
	/**
	 * input the force of this particle, and caculate the
	 * velocity and position of next frame
	 * @parm: force: the force this particle received
	 */
	void move(Vector3d& force)
	{
		Vector3d velocity_ = velocity + force / m * dT;
		position = position + velocity * dT;
		velocity = velocity_;
	};

	// report the position of this particle
	void report()
	{
		std::cout << "-------------------------------------" << std::endl;
		std::cout << n << std::endl;
		printf("x : %.4f, y : %.4f, z : %.4f, ", position.x, position.y, position.z);
		printf("v_x : %.4f, v_y : %.4f, v_z : %.4f \n", velocity.x, velocity.y, velocity.z);
	};
};

int main()
{
	int times = 10;
	// set three particles
	particle p1(0.0, 2.0, 0.0, 1e16, "1st");
	particle p2(-sqrt(3.0), -1.0, 0.0, 1e16, "2nd");
	particle p3(sqrt(3), -1.0, 0.0, 1e16, "3rd");
	// for each time computation
	for (int i = 0; i < times; i++)
	{
		std::cout << "=====================================" << std::endl;
		printf("The simulation in %f s \n", i * dT);
		// force12 means the force that particle 1 gives to particle 2
		Vector3d force12 = p1.effect(p2);
		Vector3d force13 = p1.effect(p3);
		Vector3d force23 = p2.effect(p3);
		// the force each particle receives
		Vector3d fo_1 = -force12 - force13;
		Vector3d fo_2 = force12 - force23;
		Vector3d fo_3 = force23 + force13;
		// dynamics computation
		p1.move(fo_1);
		p1.report();
		p2.move(fo_2);
		p2.report();
		p3.move(fo_3);
		p3.report();
	};
};
