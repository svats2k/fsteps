#include <chplot.h>

void main()
{
	CPlot plot;

	plot.title("Temperature Relation");
	plot.label(PLOT_AXIS_X, "Farenheit");
	plot.label(PLOT_AXIS_Y, "Celcius");

	plot.axisRange(PLOT_AXIS_X, -5, 5);
	plot.axisRange(PLOT_AXIS_Y, -5, 6);

	plot.point(1, 2);
	plot.point(2, 3);
	plot.point(3, 4);

	//plot.line(1,1,4,4);

	//plot.expr(1,5,5, "x");

	//plot.rectangle(1,1,2,2);

	//plot.rectangle(1,1,3,4);

	plot.circle(1, 1, 2);

	plot.plotting();
}
