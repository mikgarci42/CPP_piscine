#include "Fixed.hpp"
#include "Point.hpp"


bool	is_on_same_side(Point const a, Point const b, Point const point, Point const c)
{
	float		d;
	Fixed 	f;


	f = ((point.getFixedX() - a.getFixedX()) * (b.getFixedY() - a.getFixedY())) - ((point.getFixedY() - a.getFixedY()) * (b.getFixedX() - a.getFixedX()));
	d = f.toFloat();
	if ((d > 0 && ((c.getFixedX() - a.getFixedX()) * (b.getFixedY() - a.getFixedY()) - ((c.getFixedY() - a.getFixedY()) * (b.getFixedX() - a.getFixedY())) > 0)) |  (d < 0 && ((c.getFixedX() - a.getFixedX()) * (b.getFixedY() - a.getFixedY()) - ((c.getFixedY() - a.getFixedY()) * (b.getFixedX() - a.getFixedY())) < 0)))
		return true;
	return false;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (is_on_same_side(a, b, point, c))
	{
		if (is_on_same_side(b, c, point, a))
		{
			if (is_on_same_side(c, a, point, b))
				return true;
		}
	}
	return false;
}

int	main(void)
{
	Point const	a (0, 0);
	Point const b (4, 0);
	Point const c (2, 3);
	Point const	d (2, 1);

	std::cout << b.getFixedX() << std::endl;
	if (bsp(a, b, c, d))
		std::cout << "El punto se encuentra dentro del plano" << std::endl;

	return 0;
}
