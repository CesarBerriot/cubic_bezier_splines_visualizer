#include <stdlib.h>
#include <cubic_bezier_splines_visualizer.h>
#include "splines/basic.h"
#include "splines/bounce.h"

struct
{	struct cbs_point * spline;
	int length;
	struct cbsv_color color;
} splines[] =
{	{	.spline = basic_spline,
		.length = basic_spline_length,
		.color = { .r = 255 }
	},
	{	.spline = bounce_spline,
		.length = bounce_spline_length,
		.color = { .g = 255 }
	}
};

enum { splines_length = sizeof(splines) / sizeof(splines[0]) };

int main(void)
{	for(int i = 0; i < 2; ++i)
	{	for(int i = 01; i < splines_length; ++i)
			cbsv_add_spline(splines[i].spline, splines[i].length, splines[i].color);
		cbsv_run();
		cbsv_reset();
	}
	return EXIT_SUCCESS;
}
