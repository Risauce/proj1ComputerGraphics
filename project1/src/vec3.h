#pragma once
#include <string>
#include <sstream>
#include <math.h>


class Vec3 {

public:
	float values[3];

	Vec3() {
		for (int i = 0; i < 3; i++)
		{
			values[i] = 0;
		}
	}

	Vec3(float x, float y, float z)
	{
		values[0] = x;
		values[1] = y;
		values[2] = z;
	}

	std::string to_string() const {
		std::ostringstream os;
		for (int i = 0; i < 3; ++i) {
			os << values[i] << " ";
		}
		return os.str();
	}


	Vec3 operator + (Vec3 const addition)
	{
		Vec3 sum;
		for (int i = 0; i < 3; i++)
		{
			sum.values[i] = values[i] + addition.values[i];
		}

		return sum;
	}

	Vec3 operator - (Vec3 const subtraction)
	{
		Vec3 difference;
		for (int i = 0; i < 3; i++)
		{
			difference.values[i] = values[i] - subtraction.values[i];
		}

		return difference;
	}

	Vec3 normalize(const Vec3& v)
	{
		float length_of_v = sqrt((v.values[0] * v.values[0]) + (v.values[1] * v.values[1]) + (v.values[2] * v.values[2]));
		return Vec3(v.values[0] / length_of_v, v.values[1] / length_of_v, v.values[2] / length_of_v);
	}

	Vec3 operator * (const float scalar)
	{
		Vec3 result;

		for (int i = 0; i < 3; i++)
		{
			result.values[i] = values[i] * scalar;
		}

		
		return result;
	}

	Vec3 operator * (Vec3 const mult)
	{
		Vec3 crossProduct;
		crossProduct.values[0] = values[1] * mult.values[2] - values[2] * mult.values[1];
		crossProduct.values[1] = values[2] * mult.values[0] - values[0] * mult.values[2];
		crossProduct.values[2] = values[0] * mult.values[1] - values[1] * mult.values[0];

		return crossProduct; 
	}


};