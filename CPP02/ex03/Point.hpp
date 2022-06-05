#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		Point &operator=(Point const &rhs);
		float Point::getX() const;
		float Point::getY() const;
		~Point();

};