#include <eigen3/Eigen/Core>
#include <iostream>
#include <vector>

int main(){

	// Matrix and vector in Eigen are the same kind of class(Matrix)

	// Matrix<float,Dynamic,Dynamic>   <=>   MatrixXf
	// Matrix<double,Dynamic,1>        <=>   VectorXd
	// Matrix<int,1,Dynamic>           <=>   RowVectorXi
	// Matrix<float,3,3>               <=>   Matrix3f
	// Matrix<float,4,1>               <=>   Vector4f

	// MatrixXd is a object of matrix with double
	Eigen::MatrixXd m(2, 2);

	// It can be showed by stream
	std::cout << "the size of m is " << m.size() << "\n" << std::endl; 

	// creat another matrix
	Eigen::MatrixXd n(2, 2);
	// you can modify its value by index
	// Remeber the index is start from 0!!!!
	n(1, 1) = 1;
	m(0, 1) = 2;
	std::cout << "the content of matrix m:\n" << m << "\n" << std::endl;
	std::cout << "the content of matrix n:\n" << n << "\n" << std::endl;

	// Arithmetic Operation
	// you can add them directly because operator +, - and * have been overloaded
	std::cout << "m + n:\n" << m + n << "\n" << std::endl;
	std::cout << "m - n:\n" << m - n << "\n" << std::endl;
	std::cout << "m * n:\n" << m * n << "\n" << std::endl;

	// combine with some other data type
	std::vector<Eigen::Matrix4f> m_e;
	for (int i = 0; i < 10; i++){
		Eigen::Matrix4f tmp;
		// tmp(1, 1) = float(i);
		m_e.push_back(tmp);
	}
	
	std::cout << "the matrixs in this vector" << std::endl;
	for (Eigen::Matrix4f t : m_e){
		std::cout << t << std::endl;
	}

}

