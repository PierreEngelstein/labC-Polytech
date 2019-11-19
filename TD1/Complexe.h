#pragma once

#include<iostream>
#include<string>

namespace math
{
	class Complexe
	{
		public:
			Complexe();
			Complexe(float r, float i);
			Complexe(const Complexe& c);

			float GetRe() const;
			float GetIm() const;

			void SetRe(float re);
			void SetIm(float im);
			void Set(float re,float im);
			void Set(const Complexe & c);

			void AfficheSur(std::ostream & flot) const;

			std::string ToString() const;

			Complexe Plus(const Complexe& c) const;
			Complexe Fois(const Complexe& c) const;

			Complexe operator+(const Complexe& c);
			Complexe operator*(const Complexe& c);

			float& operator[](int index);
			friend std::ostream& operator<< (std::ostream& os, const Complexe& c);
		private:
			float _re;
			float _im;
	};
}

	

