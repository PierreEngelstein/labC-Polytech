#include "Complexe.h"
#include<math.h>
#include<iostream>
#include <sstream>

using namespace std;

namespace math
{
	Complexe::Complexe()
	{

	}
	Complexe::Complexe(float r, float i) : _re(r), _im(i)
	{

	}

	Complexe::Complexe(const Complexe& c) : _re(c._re), _im(c._im)
	{
	}

	float Complexe::GetIm() const
	{
		return _im;
	}

	float Complexe::GetRe() const
	{
		return _re;
	}

	void Complexe::SetRe(float re)
	{
		_re=re;
	}

	void Complexe::SetIm(float im)
	{
		_im=im;
	}

	void Complexe::Set(float re,float im)
	{
		_re=re; _im=im;
	}

	void Complexe::Set(const Complexe & c)
	{
		_re=c._re; _im=c._im;
	}	

	void Complexe::AfficheSur(std::ostream &flot) const
	{
		if((_im==0) || ((_im!=0) && (_re!=0)))	flot << _re;
		if(_im==-1) flot << '-';
		if( (_re!=0) &&(_im>0)) flot << '+';
		if(_im!=0 && _im!=-1 && _im!=1) flot << _im;
		if(_im!=0) flot <<'i';
		flot << endl;
	}

	string Complexe::ToString() const
	{
		stringstream ss;
		AfficheSur(ss);
		return ss.str();
	}

	Complexe Complexe::Plus(const Complexe& c) const
	{
		Complexe ret(_re + c._re, _im + c._im);
		return ret;
	}

	Complexe Complexe::Fois(const Complexe& c) const
	{
		Complexe ret(_re * c._re - _im*c._im, _re * c._im + _im * c._re);
		return ret; 
	}

	Complexe Complexe::operator+(const Complexe& c)
	{
		Complexe ret(_re + c._re, _im + c._im);
		return ret;
	}

	Complexe Complexe::operator*(const Complexe& c)
	{
		Complexe ret(_re * c._re - _im*c._im,  _re * c._im + _im * c._re);
		return ret;
	}

	float& Complexe::operator[](int index)
	{
		if(!index) return _re;
		else return _im;
	}

	ostream& operator<< (ostream& os, const Complexe& c)
	{
		os << c.ToString();
		return os;
	}
}

