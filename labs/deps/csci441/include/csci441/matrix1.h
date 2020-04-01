#ifndef _CSCI441_MATRIX1_H_
#define _CSCI441_MATRIX1_H_

#include <string>
class Matrix4 {
public:
	//initialize matrix to identity matrix
	void init_to_id(){
		for (int i=0; i<4; ++i){
			for(int j=0; j<4; ++j){
				values[i*4+j]= i==j;

			}
		}
	}
public:
	float values[16];

	Matrix4(float x1, float x2, float x3, float x4, float x5, float x6,float x7, float x8, float x9,float x10, float x11, float x12,float x13, float x14, float x15,float x16) {
		values[0]=x1;
		values[1]=x2;
		values[2]=x3;
		values[3]=x4;
		values[4]=x5;
		values[5]=x6;
		values[6]=x7;
		values[7]=x8;
		values[8]=x9;
		values[9]=x10;
		values[10]=x11;
		values[11]=x12;
		values[12]=x13;
		values[13]=x14;
		values[14]=x15;
		values[15]=x16;

	};

	Matrix4(){
		init_to_id();
	}

	std::string to_string() const {
		std::ostringstream os;
		for(int i=0; i<4; ++i){
			for(int j=0; j<4; ++j)
				os << values[i*4+j] << " ";
			os<< "" << std::endl;
		}
		return os.str();
	}

	//rotate around X-axis
	void rotate_x(float angle) {
		values[5] = cos(angle);
		values[6] = -sin(angle);
		values[9] = sin(angle);
		values[10] = cos(angle);
	}

	//rotate around Y-axis
	void rotate_y(float angle) {
		values[0] = cos(angle);
		values[2] = -sin(angle);
		values[8] = sin(angle);
		values[10] = cos(angle);
	}


	//rotate around Z-axis
	void rotate_z(float angle) {
		values[0] = cos(angle);
		values[1] = -sin(angle);
		values[4] = sin(angle);
		values[5] = cos(angle);
	}

	//scaling
	void scaling(float val) {
		values[0] = val;
		values[5] = val;
		values[10] = val;

	}

	//traslate
	void translate(float x, float y, float z){

		values[12] = x;
		values[13] = y;
		values[14] = z;

	}

	//multiply operation
	Matrix4 multiply(Matrix4 m2){
		Matrix4 product;
		product.values[0] = values[0]*m2.values[0]+values[1]*m2.values[4]+values[2]*m2.values[8]+values[3]*m2.values[12];
		product.values[1] = values[0]*m2.values[1]+values[1]*m2.values[5]+values[2]*m2.values[9]+values[3]*m2.values[13];
		product.values[2] = values[0]*m2.values[2]+values[1]*m2.values[6]+values[2]*m2.values[10]+values[3]*m2.values[14];
		product.values[3] = values[0]*m2.values[3]+values[1]*m2.values[7]+values[2]*m2.values[11]+values[3]*m2.values[15];
		product.values[4] = values[4]*m2.values[0]+values[5]*m2.values[4]+values[6]*m2.values[8]+values[7]*m2.values[12];
		product.values[5] = values[4]*m2.values[1]+values[5]*m2.values[5]+values[6]*m2.values[9]+values[7]*m2.values[13];
		product.values[6] = values[4]*m2.values[2]+values[5]*m2.values[6]+values[6]*m2.values[10]+values[7]*m2.values[14];
		product.values[7] = values[4]*m2.values[3]+values[5]*m2.values[7]+values[6]*m2.values[11]+values[7]*m2.values[15];
		product.values[8] = values[8]*m2.values[0]+values[9]*m2.values[4]+values[10]*m2.values[8]+values[11]*m2.values[12];
		product.values[9] = values[8]*m2.values[1]+values[9]*m2.values[5]+values[10]*m2.values[9]+values[11]*m2.values[13];
		product.values[10] = values[8]*m2.values[2]+values[9]*m2.values[6]+values[10]*m2.values[10]+values[11]*m2.values[14];
		product.values[11] = values[8]*m2.values[3]+values[9]*m2.values[7]+values[10]*m2.values[11]+values[11]*m2.values[15];
		product.values[12] = values[12]*m2.values[0]+values[13]*m2.values[4]+values[14]*m2.values[8]+values[15]*m2.values[12];
		product.values[13] = values[12]*m2.values[1]+values[13]*m2.values[5]+values[14]*m2.values[9]+values[15]*m2.values[13];
		product.values[14] = values[12]*m2.values[2]+values[13]*m2.values[6]+values[14]*m2.values[10]+values[15]*m2.values[14];
		product.values[15] = values[12]*m2.values[3]+values[13]*m2.values[7]+values[14]*m2.values[11]+values[15]*m2.values[15];


		return product;
	}

	void set(int index, float value){
		values[index] = value;
	}

	void clear(){
		init_to_id();
	}
};

#endif
